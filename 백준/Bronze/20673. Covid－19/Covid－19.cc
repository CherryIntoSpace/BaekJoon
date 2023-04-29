#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int p, q;
	
	cin>>p>>q;
	
	if(q > 30){
		cout<<"Red";
	}
	else if(p <= 50 && q <= 10){
		cout<<"White";
	}
	else{
		cout<<"Yellow";
	}
}