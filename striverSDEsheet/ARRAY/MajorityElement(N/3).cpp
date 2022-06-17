https://www.codingninjas.com/codestudio/problems/893027?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int , int> m;
    vector<int> ans;
    for(int i = 0 ; i < arr.size() ; i++) m[arr[i]]++;
    
    for(auto i : m){
        if(i.second > arr.size()/3) ans.push_back(i.first);
    }
    return ans;

}