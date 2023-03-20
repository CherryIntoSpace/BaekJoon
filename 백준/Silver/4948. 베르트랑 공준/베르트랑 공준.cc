#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int num[246913]={0,};
void eratones(int n){
	int max_multiple = sqrt(n);
	for(int i=2; i<=max_multiple; ++i){
		for(int j=2; i*j<=n; ++j){
			num[i*j]=1;
		}
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	eratones(246913);
	num[0]=1; num[1]=1;
	int n = 1;
	while(n != 0){
		int cnt = 0;
		cin>>n;
		for(int i=n+1; i<=2*n; ++i){
			if(num[i] == 0) cnt++;
		}
		if(cnt != 0) cout<<cnt<<"\n";
	}
}