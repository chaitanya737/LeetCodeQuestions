https://leetcode.com/problems/combination-sum-ii/submissions/
class Solution {
public:
    void solve(vector<int> arr , int target , vector<int> out , vector<vector<int>> &ans , int i) {
        
        if(target == 0){
            ans.push_back(out);
            return;
        }
        
        for(int j = i ; j < arr.size() ; j++){
            if(j > i and arr[j] == arr[j-1]) continue;
            if(arr[j] > target) break;
            out.push_back(arr[j]);
            solve(arr , target - arr[j] , out , ans , j+1);
            out.pop_back();
        }
        
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> out;
        sort(candidates.begin() , candidates.end());
        solve(candidates , target , out , ans , 0);
        return ans;
    }
};