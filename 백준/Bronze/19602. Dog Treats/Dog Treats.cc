#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int s, m, l;
	int sum;
	
	cin>>s>>m>>l;
	
	sum = s + (2 * m) + (3 * l);
	
	(sum >= 10) ? cout<<"happy" : cout<<"sad";
}