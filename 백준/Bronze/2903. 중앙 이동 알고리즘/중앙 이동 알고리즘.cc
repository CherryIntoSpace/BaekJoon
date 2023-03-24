#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int x;
	
	cin>>x;
	int dp[x+1];
	
	dp[0] = 2; dp[1] = 3;
	
	for(int i=2; i<=x; ++i){
		dp[i] = dp[i-1] + (dp[i-1] - 1);
	}
	
	cout<<dp[x] * dp[x];
}