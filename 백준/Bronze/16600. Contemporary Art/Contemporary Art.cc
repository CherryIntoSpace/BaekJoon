#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	unsigned long long a;
	double result;
	
	cin>>a;
	
	result = sqrt(a) * 4.0;
	
	cout<<fixed;
	cout.precision(6);
	
	cout<<result;
}