#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int x,y;
	
	cin>>x>>y;
	
	(x > y) ? cout<<x + y : cout<<y - x;
}