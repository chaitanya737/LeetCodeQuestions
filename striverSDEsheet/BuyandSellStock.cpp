https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxP = 0;
    int minimal = INT_MAX;
    for(int i = 0 ; i < prices.size() ; i++){
        minimal = min(minimal , prices[i]);
        maxP = max(maxP , prices[i]-minimal);
    }
    return maxP;
}