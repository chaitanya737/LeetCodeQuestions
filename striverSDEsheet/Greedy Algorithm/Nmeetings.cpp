https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    class meeting {
        public:
        int st;
        int en;
        int pos;
    };
    
    
    static bool comparator(meeting m1 , meeting m2) {
        if(m1.en < m2.en) return true;
        else if(m1.en > m2.en) return false;
        else if(m1.pos < m2.pos) return true;
        return false;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
       meeting meet[n];
       for(int i = 0 ; i < n ; i++) {
           meet[i].st = start[i]; meet[i].en = end[i]; meet[i].pos = i+1;
       }
       
       sort(meet, meet+n , comparator);
       
       int count = 1;
       int limit = meet[0].en;
       
       for(int i = 1; i < n ; i++) {
           if(meet[i].st > limit) {
                count++;
                limit = meet[i].en;
           }
           
       }
     return count;
       
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends