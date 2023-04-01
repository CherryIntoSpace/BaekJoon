#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string n;
	int check = 0;
	
	cin>>n;
	
	for(int i=0; i<3; ++i){
		if(n[i] == '5'){
			check++;
		}
	}
	
	if(check == 3){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}