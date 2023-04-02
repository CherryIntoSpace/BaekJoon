#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string s, s2;
	int n;
	int cnt = 0;
	
	cin>>s>>n;
	
	while(n--){
		cin>>s2;
		
		if(s == s2){
			cnt++;
		}
	}
	
	cout<<cnt;
}