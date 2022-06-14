https://www.codingninjas.com/codestudio/problems/842495?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	unordered_map<int , int> m;
    for(int i = 0 ; i < n ; i++) m[arr[i]]++;
    
    for(auto i : m){
        if(i.second > n/2) return i.first;
    }
    return -1;
}