class Solution {
public:
    string addBinary(string a, string b) {

        int min;
        if(b.size() < a.size()) {
            min = a.size()-b.size();
            for(int i = 0 ; i < min ; i++) {
                b.insert(0,"0");
            }
        } else {
            min = b.size()-a.size();
            for(int i = 0 ; i < min ; i++) {
                a.insert(0,"0");
            }
        }
        cout << a << endl;
        cout << b << endl;
        bool carry = false;
        string ans;
        for(int i = a.size()-1 ; i >= 0 ; i --) {
            
            if(a[i] == '1' && b[i] == '1') {
                
                if(carry) {
                    ans.insert(0,"1");
                } else {
                    ans.insert(0,"0");
                }
                carry = true;
                
            } else if(a[i] == '1' || b[i] == '1') {
                if(carry) {
                    ans.insert(0,"0");
                    carry = true;
                } else {
                    ans.insert(0,"1");
                    carry = false;
                }
            } else {
                if(carry) {
                    ans.insert(0,"1");
                } else {
                    ans.insert(0,"0");
                }
                carry = false;
            }

        }

        if(carry) {
            ans.insert(0,"1");
        }
        if(ans.size() == 0) {
            ans.insert(0,"0");
        }

        return ans;

    }
};