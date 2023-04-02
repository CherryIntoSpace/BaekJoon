#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int bread, pat, n;
	
	cin>>bread>>pat;
	
	n = bread / 2;
	
	if(n >= pat){
		cout<<pat;
	}
	else{
		cout<<n;
	}
}