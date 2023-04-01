#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	char c;
	string s = "9780921418";
	int n = 0;
	
	for(int i=0; i<3; ++i){
		cin>>c;
		s += c;
	}
	
	for(int i=0; i<s.length(); ++i){
		if(i % 2 == 0){
			n += (s[i]-'0');
		}
		else{
			n += (s[i]-'0') * 3;
		}
	}
	
	cout<<"The 1-3-sum is "<<n;
}