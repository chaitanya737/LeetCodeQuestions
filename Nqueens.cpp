//NQUEENS IMP QUESTION

#include <bits/stdc++.h>
using namespace std;



bool SafeHai(int board[][10] , int row , int col , int n) {
   
   //ek row main nahi hona chiaye aur ek col main nahi hona chaiye
   for(int k = 0 ; k < n ; k++) {
        if(board[row][k] or board[k][col]) return false;
    }


    //Right Diagnol
    int x = row;
    int y = col;
    while(x >= 0 and y < n) {
        if(board[x--][y++]) return false;
    }
    // Left Diagnol
    x = row;
    y = col;
    while(x >= 0 and y>=0) {
        if(board[x--][y--]) return false;
    }

    return true;

}

bool nqueens(int  board[][10] , int n , int row) {
    if(row >= n) {
        for(int i = 0 ; i<n;  i++) {
            for(int j = 0 ; j < n ; j++) {
                if(board[i][j]) cout << "Q ";
                else cout << "_ ";
            }
            cout << endl;
        }
        cout << endl;
        return false;
    }


    for(int col = 0 ; col < n ; col++) {
        if(SafeHai(board , row , col , n)) {
            board[row][col] = 1;
            if(nqueens(board , n , row+1)) return true;
            board[row][col] = 0;
        }
    }
    
    return false;
}

int main()
{
    int board[10][10] = {0}; 
    int n;
    cin>>n;
    nqueens(board , n , 0);  
    return 0;
}