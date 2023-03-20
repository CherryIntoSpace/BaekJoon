#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std; 
void eratones(int n, int *num){ //배수는 1로 설정함 
	int max_multiple = sqrt(n);
	for(int i=2; i<=max_multiple; ++i){
		for(int j=2; i*j<=n; ++j){
			num[i*j]=1;
		}
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t,n,a,b;
	cin>>t;
	for(int i=0; i<t; ++i){
		cin>>n;
		int num[n+1]={0,};
		num[0]=1; num[1]=1;
		eratones(n,num);
		int min = n-1;
		for(int j=0; j<=n; ++j){
			if(num[j]==0 && num[n-j] == 0){
				if(abs(j-(n-j)) <= min){
					a=j;
					b=n-j;
					min=abs(a-b);
				}
			}
		}
		(a <= b) ? cout<<a<<" "<<b<<"\n" : cout<<b<<" "<<a<<"\n";
	}
}