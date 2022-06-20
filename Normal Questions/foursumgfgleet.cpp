https://leetcode.com/problems/4sum/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
         vector<vector<int>> res;
        if(n < 4) return {};
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                int left = j+1 , right = n-1;
                while(left < right){
                   long long int sum=nums[i]*1ll+nums[j]*1ll+nums[left]*1ll+nums[right]*1ll;
                    if(sum == target){
                        res.push_back({nums[i] , nums[j] , nums[left] , nums[right]});
                        int lv = left;
                        while(left < n and nums[lv] == nums[left]) left++;
                        int rv = right;
                        while(right > left and nums[rv] == nums[right]) right--;
                    }
                    else if(sum < target) left++;
                    else right--;
                }
                while(j + 1 < n and nums[j] == nums[j+1]) j++;
            }
            while(i + 1 < n and nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};