class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int index =  0;

        for(int i = 1 ; i < nums.size() ; i++) {
            if(nums[index] == nums[i]) {
                return true;
            }
            index++;
        }

        return false;
    }
};