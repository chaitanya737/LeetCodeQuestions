https://www.hackerrank.com/challenges/one-week-preparation-kit-time-conversion/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-one
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string output = "";
    int n = s.length();
    for(int i = 0 ; i < 8 ; i++) {
        if(s[8] == 'A') {
            if(s[1] == '2') {
                if(i == 1 or i == 0) {
                    output.push_back('0');
                    continue;
                }
            }
            output.push_back(s[i]);
        }
        else if(s[8] == 'P') {
            if(s[1] == 2  and s[0] == 1) {
                output.push_back(s[i]);
            }
           
            else if(s[0] == '0' and s[1] == '1' ) {
                output[0] = '1';
                output[1] = '3';
            }
             else if(s[0] == '0' and s[1] == '2' ) {
                output[0] = '1';
                output[1] = '4';
            }
             else if(s[0] == '0' and s[1] == '3' ) {
                output[0] = '1';
                output[1] = '5';
            } 
             else if(s[0] == '0' and s[1] == '4' ) {
                output[0] = '1';
                output[1] = '6';
            } 
             else if(s[0] == '0' and s[1] == '5' ) {
                output[0] = '1';
                output[1] = '7';
            } 
             else if(s[0] == '0' and s[1] == '6' ) {
                output[0] = '1';
                output[1] = '8';
            } 
             else if(s[0] == '0' and s[1] == '7' ) {
                output[0] = '1';
                output[1] = '9';
            } 
             else if(s[0] == '0' and s[1] == '8' ) {
                output[0] = '2';
                output[1] = '0';
            } 
             else if(s[0] == '0' and s[1] == '9' ) {
                output[0] = '2';
                output[1] = '1';
            } 
             else if(s[0] == '1' and s[1] == '0' ) {
                output[0] = '2';
                output[1] = '2';
            }
             else if(s[0] == '1' and s[1] == '1' ) {
                output[0] = '2';
                output[1] = '3';
            }    
            output.push_back(s[i]);
        }
    }
    return output;
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
