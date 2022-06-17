https://www.codingninjas.com/codestudio/problems/920321?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int> mp;
    int maxL = 0;
    int sum = 0;
    for(int i = 0;  i < arr.size() ; i++) {
        sum += arr[i];
        if(sum == 0) maxL = i+1;
        else {
            if(mp.find(sum) != mp.end()) 
                maxL = max(maxL , i - mp[sum]);
            else mp[sum] = i;
        }
    }
    return maxL;

}