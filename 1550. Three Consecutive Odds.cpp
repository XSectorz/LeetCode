class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        bool isOdds = false;
        for(int i = 0 ; i < arr.size() ; i++) {
            
            if(arr[i]%2 != 0) {
                isOdds = true;
                for(int j = 1 ; j <= 2 ; j++) {
                    if(i+j >= arr.size()) {
                        isOdds = false;
                        break;
                    }
                    if(arr[i+j]%2 == 0) {
                        isOdds = false;
                        break;
                    }
                }
                if(isOdds) {
                    return isOdds;
                }
            }

        }
        return isOdds;

    }
};