#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int num[1000001]={0,};
void eratones(int n){
	int max_multiple = sqrt(n);
	for(int i=2; i<=max_multiple; ++i){
		for(int j=2; i*j<=n; ++j){
			num[i*j]=1;
		}
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	
	eratones(1000000);
	num[0]=1; num[1]=1;
	
	int n;
	for(int i=0; i<t; ++i){
		cin>>n;
		
		int cnt = 0;
		bool flag[n+1] = {false};
		for(int j=0; j<=n; ++j){
			if((num[j] == 0) && (num[n-j] == 0) && (!flag[j]) && (!flag[n-j])){
				flag[j] = true;
				flag[n-j] = true;
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
}