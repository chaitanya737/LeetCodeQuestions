https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/#
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int dp[1001][1001];
    
    bool solve(int arr[] , int sum , int n) {
        if(sum == 0) return dp[n][sum] = true;
        if(n == 0) return dp[n][sum] = false;
        
        if(dp[n][sum] != -1) return dp[n][sum];
        bool op1 , op2;
        if(arr[n-1] <= sum) {    //Agar arr[i] is less than the sum
        op1 = solve(arr,sum-arr[n-1] , n-1);  //Ek baar Include Kara Hai 
        }
        op2 = solve(arr,sum , n-1);   //Ek baar nahi kara
        
        return dp[n][sum] = op1 || op2;
    }
    bool isSubsetSum(int N, int arr[], int sum){
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(arr,sum , N);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends