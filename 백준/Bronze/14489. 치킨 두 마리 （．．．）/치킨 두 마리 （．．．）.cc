#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int a, b, c;
	
	cin>>a>>b>>c;
	
	if((a+b) - (2 * c) < 0){
		cout<<a+b;
	}
	else{
		cout<<(a+b) - (2 * c);
	}
}