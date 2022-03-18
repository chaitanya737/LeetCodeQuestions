https://practice.geeksforgeeks.org/problems/number-of-coins1824/1/#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int helper(int coins[], int M, int V , vector<vector<int>> &dp) {
	    if(M == 0 and V > 0) return dp[M][V] = INT_MAX-1;
	    if(V == 0) return dp[M][V] = 0;
	    
	    if(dp[M][V] != -1) return dp[M][V];
	    
	    //Include
	    if(coins[M-1] <= V) return dp[M][V] = min(1 + helper(coins , M , V - coins[M-1] , dp) , helper(coins , M-1 , V , dp));
        
        else return dp[M][V] = helper(coins , M-1 , V , dp);
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>> dp(M+1 , vector<int>(V+1 , -1));
	    int res = helper(coins , M , V , dp);
	    if(res == INT_MAX || res == INT_MAX - 1) return -1;
	    else return res;
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends