https://hack.codingblocks.com/app/contests/2439/919/problem
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i = 2;
	while(i < n) {
		if(n%i == 0) {
			cout<<"Not Prime";
			return 0;
		}
		i = i + 1;
	}
	cout<<"Prime";
	return 0;
}