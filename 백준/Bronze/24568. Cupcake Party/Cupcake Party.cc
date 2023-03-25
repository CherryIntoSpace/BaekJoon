#include <iostream>
using namespace std;
int main(int argc, char** argv) { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
	int a, b;
	int sum = 0;
	
	cin>>a>>b;
	
	sum = a * 8 + b * 3;
	
	cout<<sum - 28;
}