#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int num[3];
	
	for(int &x : num){
		cin>>x;
	}
	
	sort(num,num+3);
	
	cout<<num[1]+num[2];
}