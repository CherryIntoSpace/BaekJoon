#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int n1 = 3;
	int n2 = 2;
	int min = 2000;
	int result = 0;
	int x;
	
	while(n1--){
		cin>>x;
		
		if(x < min) min = x;
	}
	result += min;
	min = 2000;
	while(n2--){
		cin>>x;
		
		if(x < min) min = x;
	}
	result += min;
	
	cout<<result-50;
}