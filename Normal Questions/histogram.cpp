https://leetcode.com/problems/largest-rectangle-in-histogram/
//Previous Smaller and Next Smaller Nikalna Bhi isi Me
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ns[100005] , ps[100005];
        stack<int> s; //index ps ns
        for(int i = 0 ; i < heights.size() ; i++){
            while(!s.empty() && heights[s.top()] > heights[i]){
                ns[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ns[s.top()] = heights.size();
            s.pop();
        }
        
        //ps
        ps[0] = -1;
        s.push(0);
        for(int i = 0 ; i < heights.size() ; i++){
            
            while(!s.empty() and heights[s.top()] >= heights[i]){
                s.pop();
            }
            if(!s.empty()){
                ps[i] =  s.top();
            }
            else ps[i] = -1;
            
            s.push(i);
        }
        
        int max_area = 0;
        for(int i = 0 ; i < heights.size() ; i++){
            int area = heights[i] * (ns[i] - ps[i] - 1);
            max_area = max(area , max_area);
        }
        return max_area;
    }
};