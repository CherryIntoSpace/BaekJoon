#include <iostream>
using namespace std;
int solve(int a, int b, int c){
	int sum = 0;
	
	sum += a * 3;
	sum += b * 2;
	sum += c;
	
	return sum; 
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int a,b,c;
	int apple, banana;
	
	cin>>a>>b>>c;
	apple = solve(a,b,c);
	
	cin>>a>>b>>c;
	banana = solve(a,b,c);
	
	if(apple > banana){
		cout<<"A";
	}
	else if(apple < banana){
		cout<<"B";
	}
	else{
		cout<<"T";
	}
}