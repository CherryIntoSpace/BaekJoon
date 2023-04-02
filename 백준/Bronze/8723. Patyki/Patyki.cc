#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int tri[3];
	
	for(int &x : tri){
		cin>>x;
	}
	
	sort(tri,tri+3);
	
	if(tri[0] == tri[1] && tri[1] == tri[2]){
		cout<<2;
	}
	else if((tri[2] * tri[2]) == (tri[0] * tri[0]) + (tri[1] * tri[1])){
		cout<<1;
	}
	else{
		cout<<0;
	}
}