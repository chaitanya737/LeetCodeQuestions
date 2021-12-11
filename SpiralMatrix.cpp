https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0 , right = m-1 , top = 0 , bottom = n-1;
        while(left <= right and top <= bottom){
            for(int col = left ; col <= right ; col++) ans.push_back(matrix[top][col]);
            top++;
            if(top>bottom) break;
            for(int row = top ; row <= bottom ; row++) ans.push_back(matrix[row][right]);
            right--;
            if(left > right) break;
            for(int col = right ; col>=left ; col--) ans.push_back(matrix[bottom][col]);
            bottom--;
            
            if(top > bottom) break;
            for(int row = bottom ; row >= top ; row--) ans.push_back(matrix[row][left]);
            left++;
            if(left > right) break;
        }
    return ans;
    }
};