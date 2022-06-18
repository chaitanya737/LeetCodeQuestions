https://leetcode.com/problems/combination-sum/submissions/
class Solution {
public:
    
    void solve(vector<vector<int>> &ans , vector<int> out , vector<int>& candidates, int target , int i){
        if(i >= candidates.size()) {
            if(target == 0) ans.push_back(out);
            return;
        }
        
        //recursive
        if(candidates[i] <= target) {
            out.push_back(candidates[i]);
            solve(ans , out , candidates , target-candidates[i] , i);
            out.pop_back();
        }
        
        solve(ans , out , candidates , target , i + 1);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(ans , output , candidates , target , 0);
        return ans;
    }
};