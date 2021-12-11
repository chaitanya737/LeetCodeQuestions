https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1#
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int sorted[n+m];
        int i = 0 , j = 0 , l = 0;
        while(i<n and j < m ){
            if(arr1[i] > arr2[j]) sorted[l++] = arr2[j++];
            else  sorted[l++] = arr1[i++];
        }
        while(i < n) sorted[l++] = arr1[i++];
        while(j<m) sorted[l++] = arr2[j++];
        
        return sorted[k-1];
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends