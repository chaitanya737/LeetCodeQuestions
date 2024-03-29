#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s1 = "abcde" , s2 = "ace";
    int n  = s1.length();
    int m = s2.length();
    string ans = "";
    int dp[n+1][m+1];

    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= m ; j++) {
            if(i == 0 or j == 0) dp[i][j] = 0;

            else if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];

            else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }

    int i = n , j = m;
    while(i>0 and j >0)  {
        if(s1[i-1] == s2[j-1]){
            ans.push_back(s1[i]);
            i--;j--;
        }
        else {
            if(dp[i-1][j] > dp[i][j-1]) j--;
            else i--;
        }
    }

    reverse(ans.begin() , ans.end());
    for(auto i = 0 ; i < ans.length() ; i++) cout<< ans[i] <<" "; 

    return 0;
}