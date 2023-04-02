#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int num[4];
	
	for(int &x : num){
		cin>>x;
	}
	
	if((num[0] == 8) || (num[0] == 9)){
		if((num[3] == 8) || (num[3] == 9)){
			if(num[1] == num[2]){
				cout<<"ignore";
				return 0;
			}
		}
	}
	
	cout<<"answer";
}