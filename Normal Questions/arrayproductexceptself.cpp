https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n) , r(n);
        l[0] = 1;
        r[n-1] = 1;
        for(int i = 1 ; i < nums.size() ; i++) l[i] = l[i-1] * nums[i-1];
        for(int i = n-2 ; i >=0 ; i--) r[i] = r[i+1] * nums[i+1];
        for(int i = 0 ; i < nums.size() ; i++) nums[i] = l[i] * r[i];
        return nums;
    }
};