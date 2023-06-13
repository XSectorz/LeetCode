import java.util.ArrayList;

class Solution {
    public String[] findWords(String[] words) {
        ArrayList<String> row = new ArrayList<>();
        row.add("qwertyuiop");
        row.add("asdfghjkl");
        row.add("zxcvbnm");

        ArrayList<String> ans = new ArrayList<>();
        boolean row1;
        boolean row2;
        boolean row3;

        for (String word : words) {
            row1 = true;
            row2 = true;
            row3 = true;

            for (int i = 0; i < word.length(); i++) {
                char ch = Character.toLowerCase(word.charAt(i));

                if (!row.get(0).contains(String.valueOf(ch))) {
                    row1 = false;
                }
                if (!row.get(1).contains(String.valueOf(ch))) {
                    row2 = false;
                }
                if (!row.get(2).contains(String.valueOf(ch))) {
                    row3 = false;
                }
            }

            if (row1 || row2 || row3) {
                ans.add(word);
            }
        }

        return ans.toArray(new String[0]);
    }
}
