https://hack.codingblocks.com/app/contests/2439/1833/problem
#include<iostream>
using namespace std;

int main () {
	int n;
	cin>>n;
	int no = 1;
	for(int row = 1 ; row<=n ; row++) {
		for(int j = 1; j <= row ; j++) {
			cout<<no*no<<" ";
			no++;
		}	
		no = 1;
		cout<<endl;
	}
	return 0;
}