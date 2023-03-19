#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long solve(int a, int b){
	if(a % b == 0) return b;
	else return solve(b, a%b);
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long a,b;
	cin>>a>>b;
	
	if(a < b) swap(a,b);
	
	cout<<(a * b) / solve(a,b);
}