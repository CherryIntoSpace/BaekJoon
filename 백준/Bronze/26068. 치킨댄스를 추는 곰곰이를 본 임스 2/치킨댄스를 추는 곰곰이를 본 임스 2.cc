#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, cnt = 0;
	string s;
	
	cin>>n;
	
	while(n--){
		cin>>s;
		
		string cmp;
		for(int i=2; i<s.length(); ++i){
			cmp += s[i];
		}
		
		int day = stoi(cmp);
		if(day <= 90){
			cnt++;
		}
	}
	
	cout<<cnt;
}