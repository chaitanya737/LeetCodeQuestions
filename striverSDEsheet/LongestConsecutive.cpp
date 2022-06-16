https://www.codingninjas.com/codestudio/problems/759408?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int longest = 1;
    int cur = 1;
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == arr[i+1]) continue;
        if(arr[i] + 1 == arr[i+1]) cur++;
        else {longest = max(longest, cur);
             cur = 1;}
    }
    return longest;
}