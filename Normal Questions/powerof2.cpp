https://leetcode.com/problems/power-of-two/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        while(n > 2){
            if(n % 2 != 0) break; 
            n = n/2;
        }
        if(n == 2) return true;
        else return false;
    }
};