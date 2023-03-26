#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int n = 5;
	int x, result = 0;
	
	while(n--){
		cin>>x;
		
		(x >= 40) ? result += x : result += 40;
	}
	cout<<result / 5;
}