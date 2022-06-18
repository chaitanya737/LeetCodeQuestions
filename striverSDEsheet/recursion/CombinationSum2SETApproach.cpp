https://leetcode.com/problems/combination-sum-ii/submissions/
class Solution {
public:
    void solve(vector<int> arr , int target , vector<int> out , set<vector<int>> &ans , int i) {
        if(target < 0) return;
        if(i >= arr.size()) {
            if(target == 0) ans.insert(out);
            return;
        }
        
        if(arr[i] <= target) {
            out.push_back(arr[i]);
            solve(arr , target-arr[i] , out , ans , i+1);
            out.pop_back();
        }
        
        solve(arr , target , out , ans , i+1);
        
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int> out;
        vector<vector<int>> final_ans;
        sort(candidates.begin() , candidates.end());
        solve(candidates , target , out , ans , 0);
        for(auto i : ans) final_ans.push_back(i); 
        return final_ans;
    }
};