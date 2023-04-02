#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int plane[3], passenger[3];
	int sum = 0;
	
	for(int &x : plane){
		cin>>x;
	}
	for(int &x : passenger){
		cin>>x;
	}
	
	for(int i=0; i<3; ++i){
		if(plane[i] - passenger[i] < 0){
			sum += (plane[i] - passenger[i] ) * -1;
		}
	}
	
	cout<<sum;
}