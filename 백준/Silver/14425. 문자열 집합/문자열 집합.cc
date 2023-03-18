#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std; 
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n,m,cnt = 0;
	cin>>n>>m;
	set<string> s;
	string str,str2;
	for(int i=0; i<n; ++i){
		cin>>str;
		s.insert(str);
	}
	for(int i=0; i<m; ++i){
		cin>>str2;
		if(s.find(str2) != s.end()){
			cnt++;
		}
	}
	cout<<cnt;
}