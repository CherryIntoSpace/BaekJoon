#include <iostream>
using namespace std;
int main(int argc, char** argv) { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
	int a, b, c, d, e;
	
	for(int i=0; i<2; ++i){
		cin>>a>>b>>c>>d>>e;
		
		cout<<(a * 6) + (b * 3) + (c * 2) + d + (e * 2)<<" ";
	}
}