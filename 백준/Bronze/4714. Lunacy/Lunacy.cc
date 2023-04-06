#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	double x;
	
	while(true){
		cin>>x;
		
		if(x == -1){
			break;
		}
		
		cout<<fixed;
		cout.precision(2);
		
		cout<<"Objects weighing "<<x<<" on Earth will weigh "<<x * 0.167<<" on the moon.\n";
	}
}