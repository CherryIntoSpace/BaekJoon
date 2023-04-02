#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int people[4];
	int x, y, r;
	
	for(int &a : people){
		cin>>a;
	}
	
	cin>>x>>y>>r;
	
	for(int i=0; i<4; ++i){
		if(x == people[i]){
			cout<<i+1;
			return 0;
		}
	}
	
	cout<<0;
}