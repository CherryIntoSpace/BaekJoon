#include <iostream>
#include <algorithm>
using namespace std; 
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int square_x[1001]={0};
	int square_y[1001]={0};
	
	int a,b;
	int mx = 1;
	int mn = 1000;
	int rx,ry;
	
	for(int i=0; i<3; ++i){
		cin>>a>>b;
		
		square_x[a]++;
		square_y[b]++;
		
		if(max(a,b) > mx) mx = max(a,b);
		if(min(a,b) < mn) mn = min(a,b);
	}
	for(int i=mn; i<=mx; ++i){
		if(square_x[i] == 1) rx=i;
		if(square_y[i] == 1) ry=i;
	}
	cout<<rx<<" "<<ry;
}