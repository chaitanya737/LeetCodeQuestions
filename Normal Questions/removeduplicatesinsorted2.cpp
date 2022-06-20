https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int indx = 2;
        if(nums.size() < 3) return nums.size();
        for(int i = 2 ; i < nums.size() ; i++){
           if(nums[i] != nums[indx-2]) {
               cout<<nums[i] << " "; 
               nums[indx++] = nums[i];
           }
        }
        return indx;
    }
};