https://leetcode.com/problems/simplify-path/
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string res;
        
        for(int i = 0 ; i < path.length() ; i++) {
            if(path[i] == '/') continue;
            string temp;
            while(i < path.length() and path[i] != '/') {
                temp += path[i];
                i++;
            }
            
            if(temp == ".") continue;
            else if(temp == "..") {
                if(!st.empty()) st.pop();
            }
            else
            st.push(temp);
        }
        
        
        while(!st.empty()) {
            res = '/' + st.top() + res;
            st.pop();
        }
        if(res.length() <= 1) return "/";   
        return res;
    }
};