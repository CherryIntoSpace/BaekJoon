#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
bool findPrime(long long n){
	for(long long i=2; i*i<=n; ++i){
		if(n % i == 0) return false;
	}
	return true;
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	
	long long n;
	for(int i=0; i<t; ++i){
		cin>>n;
		while(true){
			if(n == 0 || n == 1){
				n=2;
				break;
			}
			if(!findPrime(n)) n++;
			else break;
		}
		cout<<n<<"\n";
	}
}