#include <iostream>
#include <string>
using namespace std;
int divide(string a, int b){
	long long res = 0;
	for(long long i = 0; i<a.length(); ++i){
		res = (res*10)+(a[i]-'0');
		res %= b;
	}
	return res;
}
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string k;
	int l;
	cin>>k>>l;
	for(int i=2; i<=l-1; ++i){
		if(divide(k,i) == 0){
			cout<<"BAD"<<" "<<i;
			return 0;
		}
	}
	cout<<"GOOD";
	return 0;
}