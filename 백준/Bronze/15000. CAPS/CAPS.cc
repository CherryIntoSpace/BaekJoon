#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string s;
	
	cin>>s;
	
	for(char c : s){
		cout<<(char)(c-32);
	}
}