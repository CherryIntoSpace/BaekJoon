#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int m, d;
	
	cin>>m>>d;
	if(m < 2) cout<<"Before";
	else if(m > 2) cout<<"After";
	else{
		if(d < 18) cout<<"Before";
		else if(d > 18) cout<<"After";
		else cout<<"Special";
	}
}