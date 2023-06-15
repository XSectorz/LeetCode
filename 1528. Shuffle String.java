class Solution {
    public String restoreString(String s, int[] indices) {
        
        String[] data = new String[s.length()];

        int index = 0;
        for(int i : indices) {
            data[i] = String.valueOf(s.charAt(index));
            index++;
        }

        String ans = "";
        for(String sa : data) {
           ans += sa;
        }

        return ans;

    }
}