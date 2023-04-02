#include <iostream>
using namespace std;
void solve(int a, int b, int c){
	if((a < b && b < c) || (a > b && b > c)){
		cout<<"Ordered\n";
	}
	else{
		cout<<"Unordered\n";
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	int a,b,c;
	
	cin>>n;

	cout<<"Gnomes:\n";
	
	while(n--){
		cin>>a>>b>>c;
		
		solve(a,b,c);
	}
	
}