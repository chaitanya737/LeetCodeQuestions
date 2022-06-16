https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int lo = 0 , hi = n-1;
        while(lo < hi) {
            if(numbers[lo] + numbers[hi] == target) {
                ans.push_back(lo+1);
                ans.push_back(hi+1);
            }
            
            if(numbers[lo] + numbers[hi] > target) hi--;
            else lo++;
            
        }
        return ans;    
    }
    
};