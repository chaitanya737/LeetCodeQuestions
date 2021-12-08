class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1) return s;
        int st = 0 , e = 0;
        int maxL = 1;
        //Odd Length
        for(int i = 0 ; i < s.length() ; i++){
            int l = i , r = i;
            while(l >= 0 and r < s.length() and s[l] == s[r]){
                l--;
                r++;
            }
            int len = r - l - 1;
            if(len > maxL){
                 st = l+1; 
                e = r-1;
                maxL = len;
            }
        }
        //Even Length
        for(int i = 0 ; i < s.length() ; i++){
            int l = i , r = i+1;
            while(l >= 0 and r < s.length() and s[l] == s[r]){
                l--;
                r++;
            }
            int len = r - l - 1;
            if(len > maxL){
             st = l+1; 
                e = r-1;
                maxL = len;
            }
        }
        return s.substr(st , maxL);
    }
};