https://www.codingninjas.com/codestudio/problems/1112581?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    vector<int> ans;
    for(int i = n-1 ; i>=0 ; i--) {
        
        while(!s.empty() and arr[i] <= s.top()) s.pop();
        
        if(!s.empty()) {
            ans.push_back(s.top());
            s.push(arr[i]);
        }
        else {
            ans.push_back(-1);
            s.push(arr[i]);
        }
        
    }
    reverse(ans.begin() , ans.end());
    return ans;
}