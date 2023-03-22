#include <iostream>
#include <string>
using namespace std;
void DrawHeart(int n){
	for(int i=0; i<n; ++i){
		cout<<" @@@   @@@ \n";
		cout<<"@   @ @   @\n";
		cout<<"@    @    @\n";
		cout<<"@         @\n";
		cout<<" @       @ \n";
		cout<<"  @     @  \n";
		cout<<"   @   @   \n";
		cout<<"    @ @    \n";
		cout<<"     @     \n";
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin>>n;
	
	DrawHeart(n);
}