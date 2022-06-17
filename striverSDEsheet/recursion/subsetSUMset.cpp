https://www.codingninjas.com/codestudio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

void solve(vector<int> num ,int indx , int n , vector<int> &ans , int sum){
    if(indx >= n) {
     ans.push_back(sum);
        return;
    }
    //exclude
    solve(num , indx+1 , n , ans , sum);
    //include
    solve(num , indx+1 , n , ans , sum + num[indx]);
    
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    int indx = 0;
    solve(num, indx , num.size() , ans , 0);
    sort(ans.begin() , ans.end());
        return ans;
}