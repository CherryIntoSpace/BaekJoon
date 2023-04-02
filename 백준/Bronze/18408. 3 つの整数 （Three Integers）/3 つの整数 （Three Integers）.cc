#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	int one = 0, two = 0;
	
	for(int i=0; i<3; ++i){
		cin>>n;
		
		if(n == 1){
			one++;
		}
		else{
			two++;
		}
	}
	
	(one > two) ? cout<<1 : cout<<2;
}