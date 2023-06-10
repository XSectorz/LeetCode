class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);
        
        string data;

        for(int i = num.size()-1 ; i > 0 ; i--) {
           // cout << num[i] << endl;
            data.push_back(num[i]);

        }

        if(num[0] == '-') {
            data.insert(data.begin(),'-');
        } else {
            data.push_back(num[0]);
        }

        try {
            return stoi(data);
        } catch (const std::out_of_range& e) {
            return 0;
        }
        
    }
};