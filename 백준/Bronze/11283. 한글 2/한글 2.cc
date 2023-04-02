#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	int n;
	cin>>s;
                                
	n=((s[0]&255)-234)*4096+((s[1]&255)-176)*64+(s[2]&255)-127;
                                
	cout<<n;
}