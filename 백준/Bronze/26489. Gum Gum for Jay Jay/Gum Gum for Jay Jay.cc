#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string s;
	int cnt = 0;
	
	while(true){
		cin.ignore();
		getline(cin,s);
		if(cin.eof()) break;
		else cnt++;
	}
	cout<<cnt;
}