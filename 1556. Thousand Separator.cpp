class Solution {
public:
    string thousandSeparator(int n) {
        string data = to_string(n);
        string temp;

        int currentIndex = 0;

        for(int i = data.size()-1 ; i >= 0 ; i--) {

            if(currentIndex != 0 && currentIndex%3 == 0) {
                temp.push_back('.');
                currentIndex = 1;
            } else {
                
                currentIndex++;
            }
            temp.push_back(data[i]);
        }

        string ans;

        for(int i = temp.size()-1 ; i >= 0 ; i--) {
            ans.push_back(temp[i]);
        }

        return ans;
    }
};