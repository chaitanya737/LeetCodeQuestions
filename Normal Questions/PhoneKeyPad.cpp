https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution {
public:
    
    void solve(string digits ,vector<string> &ans , string output ,string map[] , int i) {
        if(i >= digits.length()) {
            ans.push_back(output);
            return;
        }    
        int number = digits[i] - '0'; //Char to Int
        string value = map[number];
        for(int j = 0 ; j < value.length() ; j++) {
            output.push_back(value[j]);
            solve(digits , ans , output , map , i+1);
            output.pop_back();
        }
    }
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() <= 0) return ans;
        string output;
        string map[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
        solve(digits , ans , "" ,map , 0); 
        return ans;
    }
};