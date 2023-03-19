#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
	if(a % b == 0) return b;
	else return gcd(b, a%b);
}
int lcm(int a, int b){
	return (a*b) / gcd(a,b);
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int denominator = lcm(b,d);
	int ea = (denominator / b) * a;
	int ec = (denominator / d) * c;
	int numerator = ea + ec;
	
	int r_gcd = gcd(denominator, numerator);
	if(r_gcd == 1) cout<<numerator<<" "<<denominator;
	else cout<<numerator / r_gcd<<" "<<denominator / r_gcd;
}