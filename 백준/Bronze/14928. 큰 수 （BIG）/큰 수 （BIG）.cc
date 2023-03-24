#include <iostream>
using namespace std;
int divide(string a, int b){
	long long res = 0;
	for(long long i = 0; i<a.length(); ++i){
		res = (res*10)+(a[i]-'0');
		res %= b;
	}
	return res;
}

int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string n;
	
	cin>>n;
	
	cout<<divide(n,20000303);
}