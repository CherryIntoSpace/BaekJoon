#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	string s;
	cin>>t;
	
	for(int i=0; i<t; ++i){
		cin>>s;
		if(s.length()>= 6 && s.length()<=9){
			cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}
	}
}