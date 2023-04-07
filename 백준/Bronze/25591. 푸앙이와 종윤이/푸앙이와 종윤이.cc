#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int x,y;
	
	cin>>x>>y;
	
	int a = 100 - x;
	int b = 100 - y;
	int c = 100 - (a + b);
	int d = a * b;
	int q = d / 100;
	int r = d % 100;
	int z = c + q;
	
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<q<<" "<<r<<"\n"<<z<<" "<<r;
}