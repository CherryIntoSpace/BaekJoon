#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, num;
	
	cin>>n;
	
	for(int i = 0; i < n; ++i){
		cin>>num;
		cout<<num<<" "<<num<<"\n";
	}
}