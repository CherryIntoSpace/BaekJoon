#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std; 
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str;
	cin>>str;
	
	set<string> s;
	for(int i=0; i<str.length(); ++i){
		for(int j=1; j<=str.length(); ++j){
			string str2=str.substr(i,j);
			s.insert(str2);
		}
	}
	cout<<s.size();
}