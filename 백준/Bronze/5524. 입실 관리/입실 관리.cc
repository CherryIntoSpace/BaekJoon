#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int t;
	string s;
	
	cin>>t;
	
	while(t--){
		cin>>s;
		
		for(char c : s){
			if(c >= 65 && c < 97){
				cout<<char(c+32);
			}
			else{
				cout<<c;
			}
		}
		cout<<"\n";
	}
}