https://www.codingninjas.com/codestudio/problems/758958?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
void solve(vector<string> &ans , string s , int indx) {
    if(indx >= s.length()) {
        ans.push_back(s);
        return;
    }
    for(int i = indx ; i < s.length() ; i++) {
        swap(s[i] , s[indx]);
        solve(ans , s , indx+1);
        swap(s[i] , s[indx]);
    }
    
}

vector<string> findPermutations(string &s) {
    vector<string> ans;
    solve(ans , s , 0);
    return ans;
}