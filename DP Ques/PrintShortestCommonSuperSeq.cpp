https://leetcode.com/problems/shortest-common-supersequence/
class Solution {
public:
    int dp[1001][1001];
    int LCS(string str1, string str2) {
       for(int i = 0 ; i <= str1.size() ; i++) {
           for(int j = 0 ; j <= str2.size() ; j++) {
               if(i == 0 || j == 0) dp[i][j] = 0;
               
               else if(str1[i-1] == str2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
               
               else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
           }
       }
        
        return dp[str1.size()][str2.size()];
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string ans = "";
        int i = str1.size();
        int j = str2.size();
        int abc = LCS(str1 , str2);
        while(i > 0 and j > 0) {
            if(str1[i-1] == str2[j-1]) {
                ans.push_back(str1[i-1]);
                i--; 
                j--;
            }
            else if(dp[i][j-1] > dp[i-1][j]) {
                ans.push_back(str2[j-1]);
                j--;
            }
            else {
                ans.push_back(str1[i-1]);
                i--;
            }
        }
        while(i > 0) {
            ans.push_back(str1[i-1]);
            i--;
        }
        while(j>0){
            ans.push_back(str2[j-1]);
            j--;
        }
        reverse(ans.begin() , ans.end());
    return ans;
    }
};