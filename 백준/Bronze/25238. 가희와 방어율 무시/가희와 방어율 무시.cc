#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	double a, b;
	
	cin>>a>>b;
	
    b = 100 - b;
	b /= 100;
	
	if(a * b >= 100) cout<<0;
	else cout<<1;
}