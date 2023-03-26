#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int m = 1, f = 1;
	int result = 0;
	
	while(m != 0 && f != 0){
		cin>>m>>f;
		
		result = m + f;
		if(result != 0) cout<<result<<"\n";
	}
}