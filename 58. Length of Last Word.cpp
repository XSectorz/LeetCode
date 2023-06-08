class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int Lastword = 0;
        bool isBreak = false;

        for(int i = 0 ; i < s.size() ; i++) {

            if(isalpha(s[i]) || isdigit(s[i])) {
                if(isBreak) {
                    Lastword = 1;
                    isBreak = false;
                } else {
                    Lastword++;
                }
            } else {
                if(!isBreak) {
                    isBreak = true;
                }
            }
        }
        return Lastword;
    }
};