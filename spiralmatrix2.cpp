https://leetcode.com/problems/spiral-matrix-ii/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int sr = 0 , er = n-1 , sc = 0 , ec = n-1;
        int no = 1;
        while(sc <= ec and sr <= er){ 
        for(int col = sc ; col <= ec ; col++){
            ans[sr][col] = no++;
            
        }
        sr++;
        if(sr > er) break;
            
        for(int row = sr ; row <= er ; row++){
            ans[row][ec] = no++;
            
        }
        ec--;
        if(sc > ec) break;
        
        for(int col = ec ; col>=sc ; col--){
            ans[er][col] = no++;
          
        }
        er--;
        if(sr > er) break;
            
        for(int row = er ; row>= sr ; row--){
            ans[row][sc] = no++;
            
        }
        sc++;
        if(sc > ec) break;
        }
        return ans;
    }
};