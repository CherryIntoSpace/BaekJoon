#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int r, c;
	
	cin>>r>>c;
	
	for(int i=1; i<=r; ++i){
		for(int j=1; j<=c; ++j){
			cout<<"*";
		}
		cout<<"\n";
	}
}