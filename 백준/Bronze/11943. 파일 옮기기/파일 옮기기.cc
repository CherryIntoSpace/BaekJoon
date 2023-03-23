#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int b1a, b1o, b2a, b2o;
	
	cin>>b1a>>b1o>>b2a>>b2o;
	
	if((b1o + b2a) < (b1a + b2o)) cout<<b1o+b2a;
	else cout<<b1a+b2o;
}