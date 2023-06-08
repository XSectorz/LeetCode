class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        bool carry = false;
        vector<int> ans;

        if(digits[digits.size()-1]+1 > 9) {
            ans.insert(ans.begin(),(digits[digits.size()-1]+1)-10);
            carry = true;
        } else {
             ans.insert(ans.begin(),(digits[digits.size()-1]+1));
        }
        
        for(int i = digits.size()-2 ; i >= 0 ; i--) {
            if(carry) {
                if(digits[i]+1 > 9) {
                   ans.insert(ans.begin(),(digits[i]+1)-10); 
                   carry = true;
                } else {
                    ans.insert(ans.begin(),(digits[i]+1));
                    carry = false;
                }
                 
            } else {
                 ans.insert(ans.begin(),(digits[i]));
            }
        }

        if(carry) {
            ans.insert(ans.begin(),1);
        }

        return ans;

    }
};