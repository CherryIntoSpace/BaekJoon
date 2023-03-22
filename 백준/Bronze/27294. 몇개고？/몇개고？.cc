#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t, s;
	
	cin>>t>>s;
	
	if((s == 1) || (t < 12) || (t > 16)){
		cout<<280;
	}
	else if((t >= 12) && (t <= 16) && (s == 0)){
		cout<<320;
	}
}