#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int answer = 0;
	int a[4], b[2];
	int min = 100;
	
	for(int i=0; i<4; ++i){
		cin>>a[i];
		answer += a[i];
		if(a[i] < min) min = a[i];
	}
	answer -= min;
	
	min = 100;
	for(int i=0; i<2; ++i){
		cin>>b[i];
		answer += b[i];
		if(b[i] < min) min = b[i];
	}
	answer -= min;
	
	cout<<answer;
}