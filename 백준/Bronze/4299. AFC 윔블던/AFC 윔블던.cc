#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int sum, differ;
	int a,b;
	
	cin>>sum>>differ;

	if(((sum + differ) % 2 == 0) && (sum >= differ)){
		a = (sum + differ) / 2;
	}
	else{
		cout<<-1;
		return 0;
	}
	b = sum - a;
	
	(a > b) ? cout<<a<<" "<<b : cout<<b<<" "<<a;
}