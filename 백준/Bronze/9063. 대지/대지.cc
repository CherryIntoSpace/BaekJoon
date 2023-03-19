#include <iostream>
#include <algorithm>
using namespace std; 
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	
	int x,y;
	int mx_x = -100000, mx_y = -10000;
	int mn_x = 10000, mn_y = 10000;
	
	for(int i=0; i<t; ++i){
		cin>>x>>y;
		
		if(x > mx_x) mx_x = x;
		if(x < mn_x) mn_x = x;
		
		if(y > mx_y) mx_y = y;
		if(y < mn_y) mn_y = y;
	}
	
	cout<<(mx_x - mn_x) * (mx_y - mn_y);
}