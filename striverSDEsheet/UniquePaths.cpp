https://leetcode.com/problems/unique-paths/submissions/
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = m-1;
        double res = 1;
        
        for(int i = 1 ; i <=r ; i++) {
            res = res* (N-r+i)/i;               //Loop for Calculating Ncr of a number if N and r are given
        }
        return (int)res;
    }

};