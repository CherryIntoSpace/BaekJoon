#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int solve(string s){
	int sum = 0;
	
	sum += s.length();
	for(char c : s){
		if(c == ':'){
			sum += 1;
		}
		else if(c == '_'){
			sum += 5;
		}
	}
	
	return sum;
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string s;
	
	cin>>s;
	
	cout<<solve(s);
}