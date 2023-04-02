#include <iostream>
using namespace std;
int solve(int goal, int pencil, int price){
	if(goal % pencil){
		return ((goal/pencil)+1) * price;
	}
	else{
		return (goal/pencil) * price;
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, a, b, c, d;
	int x, y;
	
	cin>>n>>a>>b>>c>>d;
	
	x = solve(n,a,b);
	y = solve(n,c,d);
	
	 (x > y) ? cout<<y : cout<<x;
}