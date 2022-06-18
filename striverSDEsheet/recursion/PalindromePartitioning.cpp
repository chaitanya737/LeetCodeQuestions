https://leetcode.com/problems/palindrome-partitioning/submissions/
class Solution {
public:
    
    bool isPalindrome(string s) {
        int start = 0 , end = s.size() -1;
        while(start <= end) {
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }
    
    
    void solve(int indx , string s , vector<vector<string>> &res , vector<string> path) {
        if(indx == s.size()) {
            res.push_back(path);
            return;
        }
        
        for(int i = indx ; i < s.size() ; i++ ){
            string myString = s.substr(indx , i - indx + 1);
            if(isPalindrome(myString)) {
                path.push_back(myString);
                solve(i + 1 , s , res , path);
                path.pop_back();
            }
        }
        
    }  
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        solve(0 , s , res , path);
        return res;
    }
};