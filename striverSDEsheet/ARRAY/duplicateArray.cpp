https://www.codingninjas.com/codestudio/problems/1112602?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    sort(arr.begin() , arr.end());
	for(int i = 0 ; i<n-1; i++) {
        if(arr[i]==arr[i+1]) return arr[i];
    }
    return -1;
}
