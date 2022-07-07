https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1/#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    
    struct Activity{
        int st;
        int en;
        int pos;
    };
    
    static bool comparator(Activity m1 , Activity m2) {
        if(m1.en < m2.en) return true;
        else if(m1.en > m2.en) return false;
        else if(m1.pos < m2.pos) return true;
        return false;
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        Activity act[n];
        for(int i = 0 ; i < n ; i++) {
            act[i].st = start[i]; act[i].en = end[i]; act[i].pos = i+1;
        }
        
        sort(act , act+n , comparator);
        
        int cnt = 1;
        int limit = act[0].en;
        
        for(int i = 1 ; i < n ; i++) {
            if(act[i].st > limit) {
                cnt++;
                limit = act[i].en;
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends