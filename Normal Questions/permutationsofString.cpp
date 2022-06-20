https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void permut(vector<string> &ans , int l ,int r , string S) {
	        if(l==r){
	            ans.push_back(S);
	            return;
	        }
	        for(int j = l ; j <= r ; j++){
	            swap(S[l] , S[j]);
	            permut(ans , l+1 ,r, S);
	            swap(S[l] , S[j]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    int n = S.length();
		    permut(ans , 0 ,n-1, S);
		    sort(ans.begin() , ans.end());
		    return ans;
		    
		    
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends