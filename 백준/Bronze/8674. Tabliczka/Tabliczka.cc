#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	unsigned long long m,n;
	
	cin>>m>>n;
	
	if(m % 2 == 0 || n % 2 == 0){
		cout<<0;
	}
	else{
		unsigned long long a = (((m / 2) + 1) * n) - ((m / 2) * n);
		unsigned long long b = (((n / 2) + 1) * m) - ((n / 2) * m);
		(a <= b) ? cout<<a : cout<<b;
	}
}