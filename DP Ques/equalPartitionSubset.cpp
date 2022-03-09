https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int dp[1002][1002];
    bool solve(int arr[] , int sum , int N) {
        
        if(sum == 0) return dp[N][sum] = true;
        if(N == 0) return dp[N][sum] = false;
        
        if(dp[N][sum] != -1) return dp[N][sum];
        
        int op1 , op2;
        if(arr[N-1] <= sum) {
        return dp[N][sum] = (solve(arr , sum - arr[N-1] , N-1) || solve(arr,sum,N-1));
        }
        else
        return dp[N][sum] = solve(arr,sum,N-1);
        
    }


    int equalPartition(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int sum = 0;
        for(int i = 0 ; i < N ; i++) sum += arr[i];
        
        if(sum % 2 != 0) return 0;
        
        else if(sum%2 == 0) return solve(arr,sum/2,N);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends