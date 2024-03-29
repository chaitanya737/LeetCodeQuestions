https://practice.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.


bool isSafe(int node , int color[] , bool graph[101][101] , int N , int i) {
    for(int k = 0 ; k < N ; k++) 
        if( k!=node and graph[k][node] == 1 and color[k] == i) return false;
        
        return true;
}


bool solve(int node , int m , int N , bool graph[101][101] , int color[]) {
    if(node == N) return true;
    
    for(int i = 1 ; i <= m ; i++) {
        if(isSafe(node , color , graph , N , i)){
            color[node] = i;
            if(solve(node+1 , m , N , graph , color)) return true;
            else color[node] = 0;
        }
    }
    
    return false;
}


bool graphColoring(bool graph[101][101], int m, int n) {
    // your code here
    int color[n] = {0};
    return solve(0 , m , n , graph , color);
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends