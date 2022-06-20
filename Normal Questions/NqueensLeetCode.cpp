https://leetcode.com/problems/n-queens/submissions/
class Solution {
public:
    
    bool safehai(int row ,int col ,int n ,vector<string> board) {
        for(int i = 0 ; i <= row ; i++) {
            if(board[i][col] == 'Q') return false;
        }
        
        int r = row;
        int c = col;
        
        while(r >= 0 and c < n) {
            if(board[r--][c++] == 'Q') return false;
        }
        
        r = row;
        c = col;
        
        while(r >= 0 and c >= 0) {
            if(board[r--][c--] == 'Q') return false;
        }
        
        return true;
    }
    
    
    void solve(int row , vector<string> board , vector<vector<string>> &ans , int n) {
        if(row == n) {
            ans.push_back(board);
            return;
        }
        
        for(int col = 0 ; col < n ; col++) {
            if(safehai(row , col , n , board)) {
                board[row][col] = 'Q';
                solve(row+1 , board , ans , n);
                board[row][col] = '.';
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n,'.');
		for(int i=0;i<n;i++) board.push_back(s);
        
        solve(0 , board , ans , n);
        
        return ans;
        
    }
};