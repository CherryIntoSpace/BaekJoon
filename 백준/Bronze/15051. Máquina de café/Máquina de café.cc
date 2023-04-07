#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int a1, a2, a3;
	
	cin>>a1>>a2>>a3;
	
	int r1 = (a2 * 2) + (a3 * 4);
	int r2 = (a1 * 2) + (a3 * 2);
	int r3 = (a1 * 4) + (a2 * 2);
	
	cout<<min({r1,r2,r3});
}