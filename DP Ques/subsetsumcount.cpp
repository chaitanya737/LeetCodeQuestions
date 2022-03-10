#include <bits/stdc++.h>
using namespace std;


//Function that returns the no of Subsets to a given Sum
int dp[1001][1001];
int solve(int target , int *arr , int n){
    if(target == 0) return dp[n][target]=1;
    if(n == 0) {
         return dp[n][target] = 0;
    }
    
    if(dp[n][target] != -1) return dp[n][target];

    if(arr[n-1] <= target) //Hmne Include kara plus hmne include nahi kara toh ans kya aaya
        return dp[n][target] = solve(target-arr[n-1] , arr , n-1) + solve(target , arr , n-1);

    else return dp[n][target] = solve(target , arr , n-1);

}


int main()
{   
    int target = 6;
    int arr[] = {3,3,3,3};
    memset(dp,-1,sizeof(dp));
    int n = sizeof(arr)/sizeof(int);
    cout<< solve(target , arr , n) <<" "<<endl;
    return 0;
}