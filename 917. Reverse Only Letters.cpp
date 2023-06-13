class Solution {
public:
    string reverseOnlyLetters(string s) {
        string data;
        vector<int> index;
        vector<string> dataS;

        for(int i = s.size()-1 ; i >=0 ; i--) {
            if(isalpha(s[i])) {
                data.push_back(s[i]);
            }
        }

        for(int i = 0 ; i < s.size() ; i++) {
            if(!isalpha(s[i])) {
                index.push_back(i);
                dataS.push_back(string(1, s[i]));
            }
        }

        int indexCurr = 0;
        int indexStr = 0;
        string ans;

        for(int i = 0  ; i < s.size() ; i++) {
            if(indexCurr < index.size() && i == index[indexCurr]) {
                ans.append(dataS[indexCurr]);
                indexCurr++;
            } else {
                ans.push_back(data[indexStr]);
                indexStr++;
            }
        }

        return ans;
    }
};