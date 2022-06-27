https://hack.codingblocks.com/app/contests/2439/1810/problem
#include<iostream>
using namespace std;

int main () {
	int n;
	cin>>n;
	int spaces = 0;
	for(int row = 0; row < n ; row++) {
		for(int j = row; j < n ; j++) {
			while(spaces < row) {cout<<" "; spaces++;}
			cout<<"*"<<" ";
		}
		spaces = 0;
		cout<<endl;
	}
	return 0;
}