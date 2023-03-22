#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int a;
	
	cin>>a;
	
	int V = a / 5;
	int I = a % 5;
	
	for(int i=0; i<V; ++i){
		cout<<'V';
	}
	for(int i=0; i<I; ++i){
		cout<<'I';
	}
}