https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1
// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr , arr + size);
    for(int i = 0 ; i < size ; i++){
        int y = arr[i] + n;
        int j = 0 , k = size - 1;
        while(j <= k){
            int mid = (j + k)/2;
            if(arr[mid] == y){
                return true;
            }
            else if(y > arr[mid]) j++;
            else k--;
        }
    }
    return false;
}