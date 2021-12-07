class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 , j = 0 , m = 0;
        set<char> h;
        while(j < s.length()){
            if(h.find(s[j]) == h.end()){
                h.insert(s[j]);
                j++;
                m = max(m , (int)h.size());
            }
            else {
                h.erase(s[i]);
                i++;
            }
        }
        return m;
    }
};