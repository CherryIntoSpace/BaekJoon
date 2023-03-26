#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int level[3];
	int sum = 0;
	int min = 100;
	int min_index;
	int x;
	
	for(int i=0; i<3; ++i){
		cin>>x;
		level[i] = x;
		sum += x;
		if(x < min){
			min = x;
			min_index = i;
		}
	}
	
	if(sum >= 100){
		cout<<"OK";
	}
	else{
		if(min_index == 0){
			cout<<"Soongsil";
		}
		else if(min_index == 1){
			cout<<"Korea";
		}
		else{
			cout<<"Hanyang";
		}
	}
}