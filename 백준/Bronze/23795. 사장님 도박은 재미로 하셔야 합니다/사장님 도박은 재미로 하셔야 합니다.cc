#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int sum = 0;
	int n = 1;
	
	while(n != -1){
		cin>>n;
		
		if(n != -1){
			sum += n;
		}
	}
	
	cout<<sum;
}