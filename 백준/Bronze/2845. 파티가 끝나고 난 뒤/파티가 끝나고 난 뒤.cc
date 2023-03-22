#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int L, P;
	int news[5];
	
	cin>>L>>P;
	for(int &x : news) cin>>x;
	
	for(int x : news){
		cout<<x - (L * P)<<" ";
	}
}