#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int t;
	double d, f, p;
	
	cin>>t;
	
	while(t--){
		cin>>d>>f>>p;
		
		cout<<fixed;
		cout.precision(2);
		
		cout<<"$"<<d * f * p<<"\n";
	}
}