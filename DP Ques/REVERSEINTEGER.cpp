class Solution {
public:
    int reverse(int x) {
        long long int rem;
        long long int ans = 0;
        while(x != 0) {
            rem = x%10;
            ans = ans*10 + rem;
            x = x/10;
        }
        return ans>INT_MAX? 0 : ans<INT_MIN ? 0 : ans;
    }
};