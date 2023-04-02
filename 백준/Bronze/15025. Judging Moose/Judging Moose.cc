#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int left, right;
	
	cin>>left>>right;
	
	if(left == 0 && right == 0){
		cout<<"Not a moose";
	}
	else if(left == right){
		cout<<"Even "<<left*2;
	}
	else{
		cout<<"Odd "<<max(left,right)*2;
	}
}