class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int upper = 0;
        int lower = 0;

        bool isFirstCap = false;
        bool isBad = false;

        if(isupper(word[0])) {
            isFirstCap = true;
        }

        for(int i = 0 ; i < word.size() ; i++) {
            if(isupper(word[i])) {
                upper++;
            }
            if(islower(word[i])) {
                lower++;
            }
            if(isFirstCap) {
                if(isupper(word[i]) && i != 0) {
                    isBad = true;
                }
            }


        }

        if(upper == word.size()) {
            return true;
        }

        if(lower == word.size()) {
            return true;
        }

        if(isFirstCap) {
            if(isBad) {
                return false;
            }
            return true;
        }

        return false;

    }
};