#include <iostream>
using namespace std;
int main(int argc, char** argv) { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
	int a, b;
	
	cin>>a>>b;
	
	if(a - b < 0){
		cout<<-1 * (a - b);
	}
	else cout<<a - b;
}