#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int convert(char c){
	int n = c - '0';
	if(n > 9){
		n -= 7;
	}
	
	return n;
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string in;
	int no, sum = 0;
	
	cin>>in>>no;
	
	for(int i=0; i<in.length()-1; ++i){
		int n = convert(in[i]);
		for(int j=in.length()-1-i; j>=1; --j){
			n *= no;
		}
		sum += n;
	}
	sum += convert(in[in.length()-1]);
	
	cout<<sum;
}