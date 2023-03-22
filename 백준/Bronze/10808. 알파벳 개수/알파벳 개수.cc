#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int alphabet[26]={0};
	string s;
	
	cin>>s;
	
	for(char ch : s){
		alphabet[ch - 'a']++;
	}
	
	for(int x : alphabet) cout<<x<<" ";
}