class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        int start;
        int end;

        if(nums.size() != 0) {
            start = nums[0];
            end = nums[0];
        }
        vector<string> ans;

        for(int i = 1 ; i < nums.size() ; i++) {

            if(end+1 == nums[i]) {
                end = nums[i];
            } else {
                if(start == end) {
                     ans.push_back(to_string(start));
                } else {
                     ans.push_back(to_string(start) + "->" + to_string(end));
                }
                start = nums[i];
                end = nums[i];
            }

            if(i+1 == nums.size()) {
                if(start == end) {
                     ans.push_back(to_string(start));
                } else {
                     ans.push_back(to_string(start) + "->" + to_string(end));
                }
            }
        }

        if(ans.size() == 0 && nums.size() != 0) {
            ans.push_back(to_string(start));
        }


        return ans;
    }
};