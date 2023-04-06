#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	string ptr = "ptr";
	
	cin>>n;
	
	cout<<"int a;\n";
	if(n == 1){
		cout<<"int *ptr = &a;\n";
	}
	else{
		cout<<"int *ptr = &a;\n";
		for(int i=2; i<=n; ++i){
			cout<<"int ";
			for(int j=1; j<=i; ++j){
				cout<<"*";
			}
			if(i == 2){
				cout<<ptr<<i<<" = &"<<ptr<<";\n";
			}
			else{
				cout<<ptr<<i<<" = &"<<ptr<<i-1<<";\n";
			}
		}
	}
}