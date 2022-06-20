https://leetcode.com/problems/subsets-ii/
class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &nums , vector<int>& v , int idx){
        ans.push_back(v);
        for(int i = idx ; i < nums.size() ; i++){
            if(i == idx || nums[i] != nums[i-1]){
                v.push_back(nums[i]);
                solve(nums,v,i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> c;
        sort(nums.begin() , nums.end());
        solve(nums , c , 0);
        return ans;
    }
};