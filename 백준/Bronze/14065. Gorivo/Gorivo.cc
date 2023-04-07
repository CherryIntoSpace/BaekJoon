#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	double mile;
	
	cin>>mile;
	
	double meter = 1609.344 * mile;
	double liter = (100000 / meter) * 3.785411784;
	
	cout<<fixed;
	cout.precision(6);
	
	cout<<liter;
}