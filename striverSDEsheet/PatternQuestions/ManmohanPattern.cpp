https://hack.codingblocks.com/app/contests/2439/232/problem
#include<iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int no = 1;
    for(int row = 1 ; row<=n ; row++) {
        if(row == 1) {cout<<"1"<<endl; continue;}
        for(int j = 1 ; j <= row ; j++) {
            if(j == 1 or j == row) cout<<no;
            else cout<<"0";
        }
        no++;
        cout<<endl;
    }
    return 0;
}