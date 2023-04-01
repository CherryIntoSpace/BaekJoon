#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int lim, cur, gap;
	
	cin>>lim>>cur;
	
	gap = cur - lim;
	
	if(gap <=  0){
		cout<<"Congratulations, you are within the speed limit!";
	}
	else{
		if(gap >= 1 && gap <= 20){
			cout<<"You are speeding and your fine is $100.";
		}
		else if(gap >= 21 && gap <= 30){
			cout<<"You are speeding and your fine is $270.";
		}
		else{
			cout<<"You are speeding and your fine is $500.";
		}
	}
}