#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int d1, d2;
	
	cin>>d1>>d2;
	
	double result = (2.0 * d1) + (2.0 * d2 * 3.141592);
	
	cout<<fixed;
	cout.precision(6);
	
	cout<<result;
}