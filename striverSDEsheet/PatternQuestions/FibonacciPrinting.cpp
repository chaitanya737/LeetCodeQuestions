https://hack.codingblocks.com/app/contests/2439/498/problem
#include<iostream>
using namespace std;
int main() {
	int n;
	int no = 0;
	int add = 1;
	int c;
	cin>>n;
	for(int row = 1 ; row<=n ; row++) {
		for(int i = 1 ; i <= row ; i++) {
			c = no + add;
			cout<<no<<" ";
			no = add;
			add = c;
			
		}
		cout<<endl;
	}
	return 0;
}