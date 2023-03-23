#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string n, m;
	
	cin>>n>>m;
	
	if(n == m) cout<<1;
	else cout<<0;
}