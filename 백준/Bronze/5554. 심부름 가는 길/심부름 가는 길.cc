#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int s;
	int sum = 0;
	
	for(int i=0; i<4; ++i){
		cin>>s;
		sum += s;
	}
	
	cout<<sum / 60<<"\n"<<sum % 60;
}