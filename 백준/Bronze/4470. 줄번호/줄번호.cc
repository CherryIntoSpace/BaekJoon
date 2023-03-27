#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	
	cin>>n;
	cin.ignore();
	
	string arr[n];
	string s;
	
	for(int i=0; i<n; ++i){
		getline(cin, s);
		arr[i] = s;
	}
	
	for(int i=0; i<n; ++i){
		cout<<i+1<<". "<<arr[i]<<"\n";
	}
}