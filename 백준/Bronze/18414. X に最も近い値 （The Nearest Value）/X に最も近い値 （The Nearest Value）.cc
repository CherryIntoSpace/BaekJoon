#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int x, l, r;
	int min = 100000;
	int gap, index;
	
	cin>>x>>l>>r;
	
	for(int i=l; i<=r; ++i){
		gap = abs(i-x);
		if(min > gap){
			min = gap;
			index = i;
		}
	}
	
	cout<<index;
}