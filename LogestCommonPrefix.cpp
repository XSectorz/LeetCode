class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        int minSize = 9999;

        for(int i = 0 ; i < strs.size() ; i++) {
            if(strs[i].size() < minSize) {
                minSize = strs[i].size();
            }
        }
        
        for(int i = 0 ; i < minSize ; i++) {
            char temp = strs[0][i];
            for(int j = 1 ; j < strs.size() ; j++) {
                if(temp != strs[j][i]) {
                      return ans;
                 } else {
                     if(j+1 == strs.size()) {
                          ans.push_back(temp);
                     }
                 }
            }
        }

        if(strs.size() > 1) {
            return ans;
        } else {
            if(strs[0].size() >= 1) {
                return strs[0];
            }
            return ans;
        }
    }
};