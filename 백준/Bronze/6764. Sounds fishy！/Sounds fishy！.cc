#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int fish[4];
	
	for(int &x : fish){
		cin>>x;
	}
	
	if((fish[0] < fish[1]) && (fish[1] < fish[2]) && (fish[2] < fish[3])){
		cout<<"Fish Rising";
	}
	else if((fish[0] > fish[1]) && (fish[1] > fish[2]) && (fish[2] > fish[3])){
		cout<<"Fish Diving";
	}
	else if((fish[0] == fish[1]) && (fish[1] == fish[2]) && (fish[2] == fish[3])){
		cout<<"Fish At Constant Depth";
	}
	else{
		cout<<"No Fish";
	}
}