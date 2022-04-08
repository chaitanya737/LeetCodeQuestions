https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1/#
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int dp[1001][1001];
  int helper(string a , string b , int n , int m){
      if(n == 0 or m == 0) return dp[n][m] = 0;
      
      if(dp[n][m] != -1) return dp[n][m];
      
      if(a[n-1] == b[m-1]) return dp[n][m] = 1 + helper(a , b , n-1 , m-1);
      
      else return dp[n][m] = max(helper(a , b , n-1 , m) , helper(a , b , n , m-1));
  }
    int longestPalinSubseq(string A) {
        //code here
        memset(dp , -1 , sizeof(dp));
        string B = A;    
        reverse(B.begin() , B.end());
        int n = A.length();
        int m = B.length();
            
        return helper(A , B ,  n , m);
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends