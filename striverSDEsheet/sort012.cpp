https://www.codingninjas.com/codestudio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int c0 = 0 , c1 = 0 , c2 = 0;
    for(int i = 0 ; i< n ; i++) {
        if(arr[i] == 0) c0++;
        else if(arr[i] == 1) c1++;
        else c2++;
    }
    for(int i = 0 ; i < c0 ; i++) arr[i] = 0;
    for(int i = c0 ; i < c1+c0 ; i++) arr[i] = 1;
    for(int i = c1+c0 ; i < n ; i++) arr[i] = 2;
}