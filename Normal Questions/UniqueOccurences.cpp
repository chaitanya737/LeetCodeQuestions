https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> helper;
        unordered_map<int ,int> m;
        for(int i = 0 ; i<arr.size() ; i++) m[arr[i]]++;
        for(auto e : m) {
          helper.push_back(e.second);
        }
        sort(helper.begin() , helper.end());
        for(int i = 0 ; i<helper.size() ; i++){
            if(i+1 < helper.size() and helper[i] == helper[i+1]) {
                return false;
                break;
            }
        }
        return true;
    }
};