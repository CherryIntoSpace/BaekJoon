#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	
	cin>>n;
	
	cout<<fixed;
	cout.precision(0);
	
	cout<<(n * 0.78)<<" "<<(n * 0.8)+(n * 0.2 * 0.78);
}