#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int num[3];
	
	for(int &x : num) cin>>x;
	
	for(int i=0; i<3; ++i){
		for(int j=i+1; j<3; ++j){
			if(num[i] > num[j]){
				swap(num[i], num[j]);
			}
		}
	}
	for(int x : num) cout<<x<<" ";
}