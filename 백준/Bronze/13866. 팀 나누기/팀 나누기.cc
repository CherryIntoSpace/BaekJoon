#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int skill[4];
	
	for(int &x : skill){
		cin>>x;
	}
	
	cout<<abs((skill[0] + skill[3]) - (skill[1] + skill[2]));
}