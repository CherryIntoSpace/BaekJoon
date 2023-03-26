#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int n;
	int result = 0;
	
	cin>>n;
	
	if(n < 100){
		result += n / 10;
		result += n % 10;
	}
	else if(n > 100){
		if(n < 110){
			result += n / 10;
			result += n % 100;
		}
		else if(n >= 110){
			result += n / 100;
			result += 10;
		}
	}
	
	cout<<result;
}