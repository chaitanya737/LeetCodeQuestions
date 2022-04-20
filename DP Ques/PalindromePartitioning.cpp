https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1/#
// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int dp[501][501];
    bool isPalindrome(string &s , int i , int j) {
        while(i<=j) {
            if(s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }
    int helper(string &s , int i , int j) {
        if(i>=j) return dp[i][j] = 0;
        if(isPalindrome(s , i , j)) return dp[i][j] = 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int res = INT_MAX;
        for(int k = i ; k < j ; k++){
            int tempAns = helper(s , i , k) + helper(s , k+1 , j) + 1;
            res = min(tempAns, res);
        }
        return dp[i][j] = res;
    }
    int palindromicPartition(string str)
    {
        memset(dp , -1 , sizeof(dp));
        return helper(str , 0 , str.length()-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends