#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    
	int n,x;
	cin>>n;
	int fibo[41]={0,1,1};
	for(int i=3; i<=41; ++i){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(int i=0; i<n; ++i){
		cin>>x;
		if(x == 0) cout<<1<<" "<<0<<"\n";
		else if(x == 1) cout<<0<<" "<<1<<"\n";
		else cout<<fibo[x-1]<<" "<<fibo[x]<<"\n";
	}
	return 0;
}