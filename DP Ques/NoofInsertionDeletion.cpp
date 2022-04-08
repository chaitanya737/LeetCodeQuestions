https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int dp[1001][1001];
	int helper(string str1, string str2 , int n , int m) {
	    if(n == 0 or m == 0) return dp[n][m] = 0;
	    
	    if(dp[n][m]!= -1) return dp[n][m];
	    
	    if(str1[n-1] == str2[m-1]) return dp[n][m] = 1 + helper(str1 , str2 , n-1 , m-1);
	    
	    else return dp[n][m] = max(helper(str1,str2 , n-1 , m) , helper(str1 , str2, n , m-1));
	}
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    memset(dp , -1 , sizeof(dp));
	    int n = str1.length();
	    int m = str2.length();
	    int noD = n - helper(str1,str2,n,m);
	    int noI = m - helper(str1,str2,n,m);
	    
	    return noD + noI;
	    
	    
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends