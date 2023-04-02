#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int b,p;
	
	cin>>b;
	
	p = (5 * b) - 400;
	
	cout<<p<<"\n";
	
	if(p > 100){
		cout<<-1;
	}
	else if(p < 100){
		cout<<1;
	}
	else{
		cout<<0;
	}
}