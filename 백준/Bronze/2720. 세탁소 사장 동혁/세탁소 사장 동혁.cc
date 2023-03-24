#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int t, n;
	
	cin>>t;
	while(t--){
		cin>>n;
		
		cout<<n/25<<" ";
		n %= 25;
		cout<<n/10<<" ";
		n %= 10;
		cout<<n/5<<" ";
		n %= 5;
		cout<<n<<"\n";
	}
}