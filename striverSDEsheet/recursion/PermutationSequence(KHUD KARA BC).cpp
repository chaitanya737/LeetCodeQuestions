https://leetcode.com/problems/permutation-sequence/
class Solution {
public:
    
    void nextP(vector<int> &v){
        int i , j;
        for(i = v.size()-2 ; i >= 0 ; i--) 
            if(v[i] < v[i+1]) break;
        
        if(i < 0) reverse(v.begin() , v.end());
        
        else {
            for(j = v.size()-1 ; j >= 0 ; j--) 
                if(v[i] < v[j]) break;
            
            swap(v[i] , v[j]);
            reverse(v.begin() + i + 1 , v.end());
        }
    }
    
    string getPermutation(int n, int k) {
        vector<int> v;
        for(int i = 1 ; i <= n ; i++) v.push_back(i);
        
        while(k>1) {
            nextP(v);
            k--;
        }
        string ans;
        for(auto i : v) ans.push_back(i + '0');
        
        return ans;
    }
};