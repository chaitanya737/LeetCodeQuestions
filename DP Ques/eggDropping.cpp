https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1/#   
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int dp[202][202];
    int helper(int e , int f){
        if(f == 0 || f == 1) return dp[e][f] = f;
        if(e == 1) return dp[e][f] = f;
        
        if(dp[e][f] != -1) return dp[e][f];
        
        int mn = INT_MAX;
        
        for(int k = 1 ; k <= f ; k++) {
            int tempAns = 1 + max(helper(e-1 , k-1) , helper(e , f-k));
            
            mn = min(tempAns , mn);
        }
        return dp[e][f] = mn;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp ,-1 , sizeof(dp));
        return helper(n , k);
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
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends