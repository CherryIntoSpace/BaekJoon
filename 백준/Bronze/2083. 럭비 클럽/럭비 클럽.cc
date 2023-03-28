#include <iostream>
#include <string>
using namespace std;
void solve(string n, int y, int w){
	if(y > 17 || w >= 80){
		cout<<n<<" "<<"Senior\n";
	}
	else{
		cout<<n<<" "<<"Junior\n";
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string n = "";
	int y = 1;
	int w = 1;
	
	while(true){
		cin>>n>>y>>w;
		if(n == "#" && y == 0 && w == 0){
			break;
		}
		solve(n,y,w);
	}
}