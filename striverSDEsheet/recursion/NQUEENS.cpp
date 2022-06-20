
https://www.codingninjas.com/codestudio/problems/759332?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

bool isSafe(int row , int col , vector<vector<int>> board , int n) {
    for(int i = 0 ; i< n ; i++) if(board[i][col] == 1) return false;
    
    int r = row , c = col;
    while(r>=0 and c<n) if(board[r--][c++] == 1) return false;
    
    r = row , c = col;
    while(r>=0 and c>=0) if(board[r--][c--] == 1) return false;
    
    return true;
}

void solve(int n , int row, vector<vector<int>> &board , vector<vector<int>> &ans){
    if(row == n) {
        vector<int> temp;
        for(auto i : board)
            for(auto j : i) temp.push_back(j);
        ans.push_back(temp);
        return;
    }
    
    for(int col = 0 ; col < n ; col++){
        if(isSafe(row , col , board , n)){
            board[row][col] = 1;
            solve(n , row + 1 , board , ans);
            board[row][col] = 0;
        }
    }
}


vector<vector<int>> solveNQueens(int n) {
        vector<vector<int>> board(n , vector<int>(n,0));
    vector<vector<int>> ans;
    solve(n , 0 , board , ans);
    return ans;
}