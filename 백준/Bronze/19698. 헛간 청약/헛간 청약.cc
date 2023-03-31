#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, w, h, l;
	
	cin>>n>>w>>h>>l;
	
	if((w / l) * (h / l) > n){
		cout<<n;
	}
	else{
		cout<<(w / l) * (h / l);
	}
}