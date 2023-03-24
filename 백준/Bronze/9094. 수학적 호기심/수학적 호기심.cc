#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    
	int t,n,m;
	int result;
	cin>>t;
	for(int i=0; i<t; ++i){
		int count = 0;
		cin>>n>>m;
		int k=n-1;
		int j=k-1;
		for(int a=1; a<=j; ++a){
			for(int b=a+1; b<=k; ++b){
				result = (a*a + b*b + m);
				if(result % (a*b) == 0)
					count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}