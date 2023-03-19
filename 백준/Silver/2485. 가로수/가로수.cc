#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
	if(a % b == 0) return b;
	else return gcd(b, a%b);
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n,x,cnt = 0;
	cin>>n;
	
	int tree[n];
	int tree_gap[n-1] = {0};
	for(int i=0; i<n; ++i){
		cin>>x;
		tree[i]=x;
	}
	
	sort(tree, tree+n, greater<int>());
	
	for(int i=0; i<n; ++i){
		tree_gap[i] = tree[i] - tree[i+1];	
	}
	
	int y = gcd(tree_gap[0],tree_gap[1]);
	for(int i=2; i<=n-2; ++i){
		y = gcd(tree_gap[i], y);
	}
	
	for(int i=0; i<n-1; ++i){
		cnt += (tree_gap[i] / y) - 1;
	}
	cout<<cnt;
}