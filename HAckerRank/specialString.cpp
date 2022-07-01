#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.

bool same(string s) {
    for(int i = 0 ; i < s.size()-1 ; i++) 
    {
        if(s[i] != s[i+1]) return false;
    }
    return true;
}

bool palindrome(string s){
    int i = 0 , n = s.size() - 1;
    while(i <= n) {
        if(s[i] != s[n]) return false;
        
        i++; n--;
    }
    return true;
}

long substrCount(int n, string s) {
    int p;
    long ans = 0 + n;
    for(int i = 0 ; i< n ; i++) {
        int repeat = 0;
        while(i + 1 < s.size() and s[i] == s[i+1]) {
            repeat++;
            i++;
        }
        ans += (repeat * (repeat+1))/2;
        
        int pointer = 1;
        while(i + pointer < s.size() and i - pointer >=0 and s[i+pointer] == s[i-1] and s[i-pointer] == s[i-1]) {
            ans++;
            pointer++;
        }
        
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
