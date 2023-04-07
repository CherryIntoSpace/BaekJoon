#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int t,n;
	int a,b;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		while(n--){
			cin>>a>>b;
			cout<<a+b<<" "<<a*b<<"\n";
		}
	}
}