#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int cnt = 0;
void solve(char ch){
	if((ch == 'a') || (ch == 'i') || (ch == 'u') || (ch == 'e') || (ch == 'o')){
		cnt++;
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	string s;
	
	cin>>n>>s;
	
	for(char ch : s){
		solve(ch);
	}
	
	cout<<cnt;
}