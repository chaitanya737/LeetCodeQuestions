https://leetcode.com/problems/combination-sum-ii/
class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> v , int i ,vector<int> &candidates, int target){
        if(target < 0) return;
        if(target == 0){
            ans.push_back(v);
            return;
        }
        
        for(int j = i ; j < candidates.size() ; j++){
            if(candidates[j] <= target){
                cout<<j<<" ";
                if(j > i and candidates[j] == candidates[j-1]) continue;
                v.push_back(candidates[j]);
                solve(v , j+1 , candidates , target - candidates[j]);
                v.pop_back();
            }
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<int> v;
        
        solve(v , 0 , candidates , target);
        return ans;
    }
};