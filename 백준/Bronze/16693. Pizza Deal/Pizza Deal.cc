#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void solve(double a1, double p1, double r1, double p2){
	double pi = 3.14159265359;
	
	double pp1 = a1 / p1;
	double pp2 = (r1 * r1 * pi) / p2;
	
	(pp1 > pp2) ? cout<<"Slice of pizza" : cout<<"Whole pizza";
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	double a1, p1, r1, p2;
	
	cin>>a1>>p1>>r1>>p2;
	
	solve(a1, p1, r1, p2);
}