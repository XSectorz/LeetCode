class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int temp = 0;
        for(int i = nums.size()- 1 ; i >= 0 ; i--) {
            if(nums[i] == 0) {
                nums.erase(nums.begin()+i);
                temp++;
            }
        }

       // for(int i = 0 ; i < nums.size() ; i++) {
        //    cout << nums[i] << endl;
        //}

        for(int i = 0 ; i < temp ; i++) {
            nums.push_back(0);
        }

    }
};