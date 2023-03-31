#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int chicken, coke, beer;
	int sum = 0;
	
	cin>>chicken>>coke>>beer;
	
	sum += beer;
	sum += coke / 2;
	
	if(sum > chicken){
		cout<<chicken;
	}
	else{
		cout<<sum;
	}
}