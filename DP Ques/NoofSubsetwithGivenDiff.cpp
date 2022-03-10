#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int solve(int *arr , int n , int s1){
    if(s1 == 0) return dp[n][s1] = 1; 
    if(n == 0) return dp[n][s1] = 0;

    if(arr[n-1] <= s1) {
        return dp[n][s1] = solve(arr,n-1,s1-arr[n-1]) + solve(arr,n-1,s1);
    }
    else return dp[n][s1] = solve(arr,n-1,s1);
}


int main()
{   
    int arr[] = {1,1,2,3};
    int dif = 1;
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(auto i : arr) sum += i;

    int s1 = (dif + sum)/2;
    
    cout << solve(arr,n , s1);  
    return 0;
}