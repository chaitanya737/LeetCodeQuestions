https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    int expand(string S , int l , int r){
        while(l >= 0 and r < S.length() and S[l] == S[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalin (string S) {
        // code here
        int start = 0 , maxL = 0;
        for(int i = 0 ; i < S.length() ; i++){
            int len1 = expand(S,i,i);
            int len2 = expand(S , i , i+1);
            int len = max(len1 , len2);
            if(len > maxL){
               maxL = len;
               start = i - (len-1)/2;
            }
        }
        return S.substr(start , maxL);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends