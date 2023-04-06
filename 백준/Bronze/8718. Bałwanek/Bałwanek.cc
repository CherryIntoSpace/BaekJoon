#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int total, n, max = 0;
	int snow[3];
	
	cin>>total>>n;
	
	total *= 1000;
	n *= 1000;
	
	snow[0] = n + (n / 2) + (n / 4);
	snow[1] = (2 * n) + n + (n / 2);
	snow[2] = n + (2 * n) + (4 * n);
	
	for(int i=0; i<3; ++i){
		if((snow[i] <= total) && (max < snow[i])){
			max = snow[i];
		}
	}
	
	cout<<max;
}