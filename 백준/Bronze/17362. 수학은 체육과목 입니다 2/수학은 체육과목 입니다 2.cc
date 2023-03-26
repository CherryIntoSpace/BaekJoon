#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	
	cin>>n;
	
	double check = n / 4.0;
	
	if(n <= 5){
		cout<<n;
	}
	else{
		if((int)(round(check)) % 2 == 0){
			if(n % 4 == 1){
				cout<<1;
			}
			else if(n % 4 == 0){
				cout<<2;
			}
			else if(n % 4 == 3){
				cout<<3;
			}
			else if(n % 4 == 2){
				cout<<4;
			}
		}
		else if((int)(round(check)) % 2 != 0){
			if(n % 4 == 2){
				cout<<2;
			}
			else if(n % 4 == 3){
				cout<<3;
			}
			else if(n % 4 == 0){
				cout<<4;
			}
			else if(n % 4 == 1){
				cout<<5;
			}
		}
	}
}