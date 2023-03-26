#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int n, m;
	
	cin>>n>>m;
	
	while(n--){
		char arr[m];
		for(char &x : arr) cin>>x;
		
		for(int i=m-1; i>=0; --i){
			cout<<arr[i];
		}
		cout<<"\n";
	}
}