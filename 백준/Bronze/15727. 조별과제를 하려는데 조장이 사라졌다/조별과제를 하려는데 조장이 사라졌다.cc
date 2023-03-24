#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	int t = 0;
	
	cin>>n;
	
	for(int i = 5; i>=1; --i){
		t += n / i;
		n %= i;
	}
	cout<<t;
}