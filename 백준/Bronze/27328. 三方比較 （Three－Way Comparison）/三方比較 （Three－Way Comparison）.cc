#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int a, b;
	
	cin>>a>>b;
	
	if(a < b) cout<<-1;
	else if(a > b) cout<<1;
	else cout<<0;
}