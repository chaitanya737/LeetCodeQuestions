https://leetcode.com/problems/4sum/submissions/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i = 0 ; i < n-3;  i++) {
            for(int j = i+1 ; j < n-2 ; j++){
               
                int lo = j + 1 , hi = n-1;
                while(lo < hi) {
                    long long int sum=nums[i]*1ll+nums[j]*1ll+nums[lo]*1ll+nums[hi]*1ll;    //Limits ko consider kra hai agara nhi bhi daalo toh sahi hai
                    if(sum == target) {ans.push_back({nums[i] , nums[j] , nums[lo] , nums[hi]});
                                      
                                      while(lo < hi and nums[lo] == nums[lo + 1]) lo++;
                                       while(lo < hi and nums[hi] == nums[hi - 1]) hi--;
                                      }
                    
                    if(sum > target) hi--;
                    else lo++;
                }
                while(j + 1 < n and nums[j] == nums[j+1]) j++;
            }
            while(i + 1 < n and nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};