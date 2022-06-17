https://leetcode.com/problems/subsets-ii/submissions/
class Solution {
public:
    void solve(vector<int> nums , set<vector<int>> &ans , vector<int> temp , int n = 0){
        if(n >= nums.size()){
            sort(temp.begin() , temp.end());
            ans.insert(temp);
            return;
        }
        
        solve(nums , ans , temp , n+1);
        
        temp.push_back(nums[n]);
        solve(nums ,ans , temp , n+1);
        
    } 
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        solve(nums , ans , temp);
        vector<vector<int>> final_ans(ans.begin() , ans.end());
        return final_ans;
    }
};