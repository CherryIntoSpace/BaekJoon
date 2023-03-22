#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n = 1;
	int num;
	int index = 1;
	
	while(true){
		cin>>n;
		
		if(n == 0) break;
		for(int i=1; i<=n; ++i){
			cin>>num;
		}
		cout<<"Case "<<index++<<": Sorting... done!\n";
	}
}