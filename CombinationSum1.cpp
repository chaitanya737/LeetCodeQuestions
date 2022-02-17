https://leetcode.com/problems/combination-sum/
class Solution {
public:
    
    void solve(vector<vector<int>> &ans , vector<int> v , int i ,vector<int> candidates, int target){
        if(target < 0) return;
        if(target == 0){
            ans.push_back(v);
            return;
        }
        
        for(int j = i ; j < candidates.size() ; j++){
            if(candidates[j] < target){
                v.push_back(candidates[j]);
                solve(ans , v , j , candidates , target - candidates[j]);
                v.pop_back();
            }
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        
        solve(v , 0 , candidates , target);
        return ans;
    }
};