https://www.codingninjas.com/codestudio/problems/758961?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
bool isSafe(int c , int board[9][9] , int row , int col) {
    for(int i = 0 ; i < 9 ; i++) {
        if(board[i][col] == c) return false;
        
        if(board[row][i] == c) return false;
        
        if(board[3 * (row/3) + i /3][3 * (col/3) + i % 3] == c) return false;
    } 
    return true;
}


bool solve(int matrix[9][9]) {
       for(int i = 0 ; i < 9  ; i++) {
           for(int j = 0 ; j < 9 ; j++) {
               if(matrix[i][j] == 0) {
                   for(int c = 1 ; c <= 9 ; c++) {
                       if(isSafe(c , matrix , i , j)){
                           matrix[i][j] = c;
                           if(solve(matrix)) return true;
                           else matrix[i][j] = 0;
                       }
                   }
                   return false;
               }
           }
       }
    return true;
}

bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    return solve(matrix);
}


https://leetcode.com/problems/sudoku-solver/submissions/

class Solution {
public:
    
    bool isSafe(char c , vector<vector<char>> board , int row , int col) {
        for(int i = 0 ; i < 9 ; i++) {
            if(board[i][col] == c) return false;
            
            if(board[row][i] == c) return false;
            
            
            if(board[3*(row/3) + (i/3)][3 * (col/3) + i % 3] == c) return false;
        }
        return true;
    }
    
    
    bool solve(vector<vector<char>> &board) {
        for(int i = 0 ; i < board.size() ; i++) {
            for(int j = 0 ; j < board[0].size() ; j++) {
                if(board[i][j] == '.'){
                    for(char c = '1' ; c <= '9' ; c++) {
                        if(isSafe(c , board , i , j)) {
                            board[i][j] = c;
                            if(solve(board)) return true;
                            else board[i][j] = '.';
                        }
                    }
                    return false;
                }                
            }
        
        }
        return true;
        
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
