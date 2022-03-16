https://practice.geeksforgeeks.org/problems/rod-cutting0840/1/#
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int dp[1002][1002];
  int solve(int price[], int n , int wt[] , int w){
      if(n == 0 || w == 0) return dp[n][w] = 0;
      
      if(dp[n][w] != -1) return dp[n][w];
      
      if(wt[n-1] <= w) {
          return dp[n][w] = max(price[n-1] + solve(price , n , wt , w - wt[n-1]) , solve(price , n-1 , wt , w));
      }
      else return dp[n][w] = solve(price , n - 1 , wt , w);
  }
    int cutRod(int price[], int n) {
        //code here
        int W = n;
        int wt[n];
        for(int i = 0 ; i < n ; i++) wt[i] = i+1;
        memset(dp , -1 , sizeof(dp));
        
        return solve(price , n , wt , W);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends