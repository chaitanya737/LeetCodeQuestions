https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans;
        stack<long long> s;
        s.push(arr[n-1]);
        ans.push_back(-1);
        long long ng;
        for(int i = n-2; i >= 0 ; i--) {
            while(!s.empty() and s.top() <= arr[i]) s.pop();
            
            ng = (s.empty())? -1 : s.top();
            ans.push_back(ng);
            s.push(arr[i]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends