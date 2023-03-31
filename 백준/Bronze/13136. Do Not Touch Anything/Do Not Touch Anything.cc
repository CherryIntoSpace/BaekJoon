#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	unsigned long long r, c, n;
	unsigned long long sum;
	unsigned long long row, col;
	
	cin>>r>>c>>n;
	
	if(r % n){
		row = (r / n) + 1;
	}
	else{
		row = (r / n);
	}
	
	if(c % n){
		col = (c / n) + 1;
	}
	else{
		col = (c / n);
	}
	
	sum = row * col;
	
	cout<<sum;
}