https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() < 1) return 0;
        set<int> s;
    for(auto i : nums) s.insert(i);
    int longest = INT_MIN;
    for(auto i : nums) {
        if(!s.count(i-1)) {
            int curN = i;
            int curS = 1;
            while(s.count(curN + 1)) {
                curS++;
                curN++;
            }
            longest = max(longest , curS);
        }
    } 
    return longest;
    }
};