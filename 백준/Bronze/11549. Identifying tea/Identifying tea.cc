#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t, x;
	int num[5]={0};
	
	cin>>t;
	
	for(int i=0; i<5; ++i){
		cin>>x;
		
		num[x]++;
	}
	
	cout<<num[t];
}