https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(vector<vector<int>> &m , int n , vector<string> &ans , int x , int y , string paths) {
        if(x < 0 or x >=n or y < 0 or y>=n or m[x][y] == 0) return;
        if(x == n-1 and y == n-1) {
            ans.push_back(paths);
            return;
        }
        
        m[x][y] = 0;
        solve(m , n , ans , x+1 , y , paths + "D");
        solve(m , n , ans , x , y-1 , paths + "L");
        solve(m , n , ans , x , y+1 , paths + "R");
        solve(m , n , ans , x-1 , y , paths + "U");
        m[x][y] = 1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string paths = "";
        solve(m,n,ans,0,0,paths);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends