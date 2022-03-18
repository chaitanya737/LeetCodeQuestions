https://leetcode.com/problems/coin-change-2/
class Solution {
public:
    int dp[301][5001];
    int solve(int amount, vector<int>& coins , int n){
        if(n == 0 || amount<0) return dp[n][amount] = 0;
        if(amount == 0) return dp[n][amount] = 1;
        
        if(dp[n][amount] != -1) return dp[n][amount];
        
        if(coins[n-1] <= amount) {
            return dp[n][amount] = solve(amount - coins[n-1] , coins , n) + solve(amount , coins , n-1);
        }
        else return dp[n][amount] = solve(amount , coins , n-1);
        
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        dp[n+1][amount+1];
        memset(dp, -1, sizeof(dp));
        return solve(amount , coins , n);
        
    }
};