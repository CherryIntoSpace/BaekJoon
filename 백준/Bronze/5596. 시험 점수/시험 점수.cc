#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int S = 0, T = 0;
	int n;
	
	for(int i=0; i<4; ++i){
		cin>>n;
		S += n;
	}
	for(int i=0; i<4; ++i){
		cin>>n;
		T += n;
	}
	
	(S > T) ? cout<<S : cout<<T;
}