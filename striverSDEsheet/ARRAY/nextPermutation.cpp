https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    int i , j;
    for(i = nums.size()-2 ; i>=0 ; i--){
        if(nums[i] < nums[i+1]) break;
    }
    
    if(i < 0) reverse(nums.begin() , nums.end());
    else{
        for(j = nums.size()-1 ; j>=0 ; j--){
            if(nums[i] < nums[j]) break;
        }
        swap(nums[i] , nums[j]);
        reverse(nums.begin() + i + 1 , nums.end());
        
    }
    return nums;
}