https://www.codingninjas.com/codestudio/problems/630418?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
   set<char> s;
    int i = 0 , j = 0 , maxL = 0;
    while(i < input.size()){
        if(s.find(input[i]) == s.end()){
            s.insert(input[i]);
            maxL = max(maxL , (int)s.size());
            i++;
        }
        else{
            s.erase(input[j]);
            j++;
        }
    }
    return maxL;
}