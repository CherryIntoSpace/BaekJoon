#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int bit[8];
	
	for(int &n : bit) cin>>n;
	
	for(int n : bit){
		if(n > 1){
			cout<<'F';
			return 0;
		}
	}
	cout<<'S';
}