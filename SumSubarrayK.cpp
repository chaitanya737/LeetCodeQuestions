https://leetcode.com/problems/subarray-sum-equals-k/submissions/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0 , count = 0;
        unordered_map<int , int> m;
        m[0] = 1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            if(m.find(sum-k) != m.end()) count+=m[sum-k];
            
            m[sum]++;
        }
        return count;
    }
};