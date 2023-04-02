#include <iostream>
using namespace std;
int solve(int n, int x){
	if(n >= x){
		return x;
	}
	else{
		return n;
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	int arr[3];
	int sum = 0;
	
	cin>>n;
	for(int &x : arr){
		cin>>x;
	}
	
	for(int i=0; i<3; ++i){
		sum += solve(n,arr[i]);
	}
	
	cout<<sum;
}