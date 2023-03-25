#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int x;
	int result = 0;
	
	for(int i=0; i<6; ++i){
		cin>>x;
		result += x;
	}
	
	cout<<result * 5;
}