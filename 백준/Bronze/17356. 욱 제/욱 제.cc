#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	double a, b, m;
	
	cin>>a>>b;
	
	m = (b - a) / 400.0;
	
	cout<<1 / (1 + pow(10,m));
}