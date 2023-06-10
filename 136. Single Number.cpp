class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        bool isSame = false;
        int temp = nums[0];

        for(int i = 1 ; i < nums.size() ; i++) {

            if(temp == nums[i]) {
                isSame = true;
            }
            if(temp != nums[i]) {
                if(isSame) {
                    isSame = false;
                } else {
                    return temp;
                }
            }
            temp = nums[i];
        }

        return temp;

    }
};