#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve(int n){
	int b1 = n*3;
	int b2 = n*2;
	for(int i=1; i<=n; ++i){ //first
		for(int j=1; j<=n; ++j){
			cout<<"@";
		}
		for(int k=1; k<=b1; ++k){
			cout<<" ";
		}
		for(int l=1; l<=n; ++l){
			cout<<"@";
		}
		cout<<"\n";
	}
	for(int i=1; i<=n; ++i){ //second
		for(int j=1; j<=n; ++j){
			cout<<"@";
		}
		for(int k=1; k<=b2; ++k){
			cout<<" ";
		}
		for(int l=1; l<=n; ++l){
			cout<<"@";
		}
		cout<<"\n";
	}
	for(int i=1; i<=n; ++i){ //third
		for(int j=1; j<=n+b2; ++j){
			cout<<"@";
		}
		cout<<"\n";
	}
		for(int i=1; i<=n; ++i){ //fourth
		for(int j=1; j<=n; ++j){
			cout<<"@";
		}
		for(int k=1; k<=b2; ++k){
			cout<<" ";
		}
		for(int l=1; l<=n; ++l){
			cout<<"@";
		}
		cout<<"\n";
	}
	for(int i=1; i<=n; ++i){ //fifth
		for(int j=1; j<=n; ++j){
			cout<<"@";
		}
		for(int k=1; k<=b1; ++k){
			cout<<" ";
		}
		for(int l=1; l<=n; ++l){
			cout<<"@";
		}
		cout<<"\n";
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	
	cin>>n;
	solve(n);
}