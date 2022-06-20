class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int sum = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] < target) {
                sum += nums[i];
                if(sum < target) ans.push_back(i);
                else sum = 0;
            }
        }
        return ans;
    }
    
};