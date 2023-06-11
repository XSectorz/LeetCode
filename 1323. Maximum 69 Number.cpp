class Solution {
public:
    int maximum69Number (int num) {
        
        int max = -1;
        
        if(num > max) {
            max = num;
        }

        for(int i = 0 ; i < to_string(num).size() ; i++) {

            string temp = to_string(num);

            if(temp[i] == '6') {
                temp[i] = '9';
            } else {
                temp[i] = '6';
            }

            if(stoi(temp) > max) {
                max = stoi(temp);
            }

        }

        return max;
    }
};