#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int k, n, m;
	
	cin>>k>>n>>m;
	
	int result = (k * n) - m;
	
	(result < 0) ? cout<<0 : cout<<result;
}