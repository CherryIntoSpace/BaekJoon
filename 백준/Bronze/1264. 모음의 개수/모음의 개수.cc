#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int solve(string s){
	int cnt = 0;
	for(char c : s){
		if((c == 'a') || (c == 'A') || (c == 'i') || (c == 'I') || (c == 'u') || (c == 'U') || (c == 'e') || (c == 'E')
			|| (c == 'o') || (c == 'O')){
				cnt++;
			}
	}
	return cnt;
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while(true){
		string s;
		
		getline(cin,s);
		if(s == "#")  break;
		
		cout<<solve(s)<<"\n";
	}
}