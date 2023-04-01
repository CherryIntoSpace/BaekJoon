#include <iostream>
using namespace std;

int solve(int d, int h, int m){
	int sum = 0;
	
	if(((d==11) && (h<11)) || ((d==11) && (h==11) && (m<11))){
		return -1;
	}
	
	if(m < 11){
		sum += (m + 60) - 11;
		h--;
	}
	else{
		sum += (m - 11);
	}
	
	if(h < 11){
		sum += ((h + 24) - 11) * 60;
		d--;
	}
	else{
		sum += (h - 11) * 60;
	}
	
	sum += ((d - 11) * 24) * 60;

	return sum;
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int d, h, m;
	
	cin>>d>>h>>m;
	
	cout<<solve(d,h,m);
}