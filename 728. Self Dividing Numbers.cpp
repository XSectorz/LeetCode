class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> data;

        for(int i = left ; i <= right ; i++) {
            string num = to_string(i);
            bool isCorrect = true;

            for(int j = 0 ; j < num.size() ; j++) {

                int Ndata = num[j]-'0';
                
                if(Ndata != 0) {
                    if(i%Ndata != 0) {
                        isCorrect = false;
                        break;
                    }
                } else {
                    isCorrect = false;
                    break;
                }

            }
            if(isCorrect) {
                data.push_back(i);
            }
        }

        return data;

    }
};