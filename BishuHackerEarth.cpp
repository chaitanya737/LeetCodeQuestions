https://www.hackerearth.com/problem/algorithm/bishu-and-soldiers-227/

#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ;i++) cin>>arr[i];
	int q;
	cin>>q;
	while(q--){
		int p;
		cin>>p;
		int c = 0;
		int sum = 0;
		for(int i =0 ; i < n ; i++){
			if(p >= arr[i]){
				c++;
				sum += arr[i];
			}
		}
		cout<<c<<" "<<sum<<endl;
	}
	
}


