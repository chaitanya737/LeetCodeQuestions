https://leetcode.com/problems/longest-valid-parentheses/submissions/
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxL = 0;
        
        for(int i = 0 ; i < s.length() ; i++) {
            if(s[i] == '(') st.push(i);
            
            else{
                st.pop();
                if(st.empty()) {
                    st.push(i);
                }
                else{
                    int len = i - st.top();
                    maxL = max(len , maxL);
                }
                
            }
        }
        return maxL;
    }

};