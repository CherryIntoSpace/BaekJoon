#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, result = 1;
	
	cin>>n;
	
	for(int i=1; i<=n; ++i){
		result *= 2;
	}
	
	cout<<result;
}