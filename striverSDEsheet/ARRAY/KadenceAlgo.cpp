https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{    
    long long maxs = 0;
    long long sum = 0;
    if(n == 0) return sum;
    for(int i = 0 ; i < n ; i++){
        sum+=arr[i];
        maxs = max(sum , maxs);
        if(sum < 0) sum = 0;
    }
    return maxs;
}