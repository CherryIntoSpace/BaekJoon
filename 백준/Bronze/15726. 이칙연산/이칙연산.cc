#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	double r1, r2;
	double a, b, c;
	
	cin>>a>>b>>c;
	
	r1 = a / b * c;
	r2 = a * b / c;
	
	(r1 > r2) ? cout<<(int)(r1) : cout<<(int)(r2);
}