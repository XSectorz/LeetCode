class Solution {
public:
    bool isPalindrome(string s) {
        
        string newStr = "";
        for(int i = 0 ; i < s.size() ; i++) {
            if(isupper(s[i])) {
                newStr.push_back(tolower(s[i]));
            } else if(islower(s[i]) || isdigit(s[i])) {
                newStr.push_back(s[i]);
            }
        }
        for(int i = 0 ; i < newStr.size()/2 ; i++) {
            //cout << newStr[i] << endl;
            //cout << newStr[(newStr.size())-1-i];
            if(newStr[i] != newStr[(newStr.size())-1-i]) {
                return false;
            }
        }
        return true;

    }
};