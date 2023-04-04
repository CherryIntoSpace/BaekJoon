#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int wc, hc, ws, hs;
	
	cin>>wc>>hc>>ws>>hs;
	
	if((wc >= ws + 2) && (hc >= hs + 2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
}