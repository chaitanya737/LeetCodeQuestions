https://hack.codingblocks.com/app/contests/2439/185/problem
#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int no = 1;
	int temp;
	int t = no;
	for(int i = 0 ; i<N ; i++){
		temp = no;
		for(int j = 0 ; j < N ; j++) {
			if(temp>0) {cout<<t++; temp--;}
			else cout<<"*";
		}
		no++;
		t = 1;
		cout<<endl;
	}
	return 0;
}