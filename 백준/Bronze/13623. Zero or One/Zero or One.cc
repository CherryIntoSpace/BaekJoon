#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int a,b,c;
	
	cin>>a>>b>>c;
	
	int sum = (a * 2 * 2) + (b * 2) + c;
	
	if(sum == 4 || sum == 3){
		cout<<"A";
	}
	else if(sum == 2 || sum == 5){
		cout<<"B";
	}
	else if(sum == 6 || sum == 1){
		cout<<"C";
	}
	else{
		cout<<"*";
	}
}