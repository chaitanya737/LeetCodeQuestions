https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=false
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    vector<char> ans(9);
    ans[0] = s[0];
    ans[1] = s[1];
    ans[2] = ':';
    ans[3] = s[3];
    ans[4] = s[4];
    ans[5] = ':';
    ans[6] = s[6];
    ans[7] = s[7];
    
    string f;
    
    if(s[8] == 'A'){
        if(s[0] == '1' and s[1] == '2') {
            ans[0] = '0';
            ans[1] = '0';
        }
        else {
            ans[0] = s[0];
            ans[1] = s[1];
        }
    }
    else if(s[8] == 'P'){
        if(s[0] == '0' and s[1] < '8') {
            ans[0] = '1';
            char hr = (int)s[1];
            hr = hr + 2;
            ans[1] = (char)hr;
        }
        else if(s[0] == '0' and (s[1] == '8' or s[1] == '9')) {
            ans[0] = '2';
            if(s[1] == '8') ans[1] = '0';
            else ans[1] = '1';
        }
        else if(s[0] != '0' and (s[1] == '0' or s[1] == '1')) {
            ans[0] = '2';
            if(s[1] == '0') ans[1] = '2' ;
            else ans[1] = '3';
        }
    }
    for(char i = 0 ; i < ans.size()-1 ; i++) {
        char b = ans[i];
        f.push_back(b);
    }
    
    return f;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
