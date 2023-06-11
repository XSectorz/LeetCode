class Solution {
public:
    int findComplement(int num) {
        
        string binary;

        while(num >= 2) {
            
            binary.push_back('0' + num%2);
            num = num/2;
        }

        binary.push_back('0' + num);

        for(int i = 0 ; i < binary.size() ; i++) {
            if(binary[i] == '0') {
                binary[i] = '1';
            } else {
                binary[i] = '0';
            }
        }

        int ans = 0;

        for(int i = binary.size()-1 ; i >= 0 ; i--) {
            ans = ans + (pow(2,i)*int(binary[i]-'0'));
        }

        return ans;
    }
};