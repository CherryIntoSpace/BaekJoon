#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	
	int l;
	double a, b, c, d;
	
	cin>>l>>a>>b>>c>>d;
	
	int study = max((ceil(a/c)), (ceil(b/d)));
	
	cout<<l - study;
}