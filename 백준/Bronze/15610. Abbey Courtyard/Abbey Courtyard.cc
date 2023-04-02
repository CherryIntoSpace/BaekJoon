#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	unsigned long long a;
	
	cin>>a;
	
	double answer = sqrt(a) * 4;
	
	cout<<fixed;
	cout.precision(6);
	
	cout<<answer;
}