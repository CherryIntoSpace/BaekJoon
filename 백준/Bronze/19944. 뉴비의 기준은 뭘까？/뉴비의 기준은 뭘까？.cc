#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	
	cin>>n>>m;
	
	if((m == 1) || (m == 2)){
		cout<<"NEWBIE!";
	}
	else if((n >= m) && (m != 1) && (m != 2)){
		cout<<"OLDBIE!";
	}
	else{
		cout<<"TLE!";
	}
}