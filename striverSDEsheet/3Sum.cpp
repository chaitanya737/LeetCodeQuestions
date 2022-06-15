https://leetcode.com/problems/3sum/submissions/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        for(int i = 0 ; i < n-2 ; i++){
            if(i == 0 or nums[i] != nums[i-1]) {
            int lo = i+1;
            int hi = n-1;
            while(lo < hi) {
                int cur = nums[i] + nums[lo] + nums[hi];
            
                if(cur == 0){ ans.push_back({nums[i] , nums[lo] , nums[hi]});
                            while(lo < hi and nums[lo] == nums[lo+1]) lo++;
                            while(lo < hi and nums[hi] == nums[hi-1]) hi--;
                            }
                if(cur > 0) hi--;
                else lo++;
    
            }
        }
    }
        return ans;
}
};