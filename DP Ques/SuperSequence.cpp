https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1/
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    int dp[1001][1001];
    int helper(string x, string y, int m, int n) {
        if(m == 0 || n == 0) return dp[m][n] = 0;
        
        if(dp[m][n] != -1) return dp[m][n];
        
        if(x[m-1] == y[n-1]) return dp[m][n] = 1 + helper(x,y,m-1,n-1);
        else return dp[m][n] = max(helper(x,y,m-1,n) , helper(x,y,m,n-1));
    }
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        memset(dp,-1,sizeof(dp));
        return m+n - helper(X,Y,m,n);
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

  // } Driver Code Ends