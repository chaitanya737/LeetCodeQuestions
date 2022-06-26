https://hack.codingblocks.com/app/contests/2439/224/problem
#include<iostream>
using namespace std;
int main() {
	int row;
	int no = 1;
	int n;
	cin>>n;
	for(row = 0 ; row < n ; row++){
		for(int j = 0 ; j <= row ; j++) {
			cout<<no++<<" ";
		}
		cout<<endl;
	}
	return 0;
}