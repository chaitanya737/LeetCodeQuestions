https://leetcode.com/problems/subsets/
class Solution {
public:
     vector<vector<int>> ans;
    void solve(vector<int> &nums , vector<int>& v , int idx){
        ans.push_back(v);
        for(int i = idx ; i < nums.size() ; i++){
    
                v.push_back(nums[i]);
                solve(nums,v,i+1);
                v.pop_back();
        
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> b;
        solve(nums , b , 0);
        return ans;
    }
};