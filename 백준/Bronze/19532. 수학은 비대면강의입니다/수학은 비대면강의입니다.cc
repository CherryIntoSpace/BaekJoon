#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
int a,b,c,d,e,f;
void solve(){
	for(int x = -999; x<=999; ++x){
		for(int y = -999; y<=999; ++y){
			if(((a*x) + (b*y) == c) && ((d*x) + (e*y) == f)){
				cout<<x<<" "<<y;
				return;
			}
		}
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin>>a>>b>>c>>d>>e>>f;
	
	solve();
}