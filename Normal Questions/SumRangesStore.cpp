https://leetcode.com/problems/summary-ranges/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size() == 0) return ans;
        if(nums.size() == 1) {
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        if(nums.size() == 2) {
            if(nums[0] + 1 == nums[1]) {
                ans.push_back(to_string(nums[0]) + "->" + to_string(nums[1]));
            }
            else {
                ans.push_back(to_string(nums[0]));
                ans.push_back(to_string(nums[1]));

            }
            return ans;
        }
        
        int start = nums[0];
        for(int i = 0 ; i < nums.size() ; i++) {
            if(i != nums.size() - 1 and nums[i]+1 == nums[i+1])  continue;
            else {
                if(nums[i] == start and i == nums.size()-1) ans.push_back(to_string(nums[i]));
                else if(nums[i] == start) {
                    ans.push_back(to_string(nums[i]));
                    start = nums[i+1];
                }
                else {
                cout<<"st" << start <<" ";
                cout<<"i" << i<<" ";
                ans.push_back(to_string(start) + "->" + to_string(nums[i]));
                if(i != nums.size()-1) start = nums[i+1];
                }
            }
        } 
        return ans;
    }
};