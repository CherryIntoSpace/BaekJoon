#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string in;
	
	getline(cin, in);
	
	if(in[0]-'0' + in[4]-'0' == in[8]-'0'){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}