#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int num[10001]={0,}; //배수 제거할 때 1로 표기 
void eratones(int n){
	int max_multiple = sqrt(n);
	for(int i=2; i<=max_multiple; ++i){
		for(int j=2; i*j<=n; ++j){
			num[i*j]=1;
		}
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	num[0]=1; num[1]=1;
	int m,n;
	cin>>m>>n;
	eratones(n);
	int min=n;
	int sum = 0;
	for(int i=m; i<=n; ++i){
		if(num[i] == 0){
			if(i <= min) min = i;
			sum += i;
		}
	}
	if(sum == 0) cout<<-1;
	else cout<<sum<<"\n"<<min;
}