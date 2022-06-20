https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1002][1002];
    int solve(int W, int wt[], int val[], int n) {
        if(n == 0 || W == 0) return dp[n][W] = 0;
        
        if(dp[n][W] != -1) return dp[n][W];
        
        
        int op1 = 0 , op2 = 0;
        if(wt[n-1] <= W) {
        op1 = val[n-1] + solve(W - wt[n-1] , wt , val , n-1);
        }
        op2 = 0 + solve(W , wt , val , n-1);
        return dp[n][W] = max(op1,op2);
        
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp , -1 , sizeof(dp));
       int ans = solve(W,wt,val , n);
       return ans;
       
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends