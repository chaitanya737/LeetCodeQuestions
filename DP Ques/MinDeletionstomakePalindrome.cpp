https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions4610/1/#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends

int helper(string str , string str2 , int n , int m) {
        int dp[n+1][m+1];
        for(int i = 0 ; i < n+1 ; i++) {
            for(int j = 0 ; j < m+1 ; j++) {
                if(i == 0 || j == 0) dp[i][j] = 0;
            }
        }
        
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= m ; j++) {
                if(str[i-1] == str2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        return dp[n][m];
        
}

int minDeletions(string str, int n) { 
    string str2 = str;
    reverse(str2.begin() , str2.end());
    
    return n - helper(str , str2 , n , n);
    
} 