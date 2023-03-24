#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	/*정수 2, 3, 4, 5의 최소공배수는 60이다.*/
	int x, y;
	
	cin>>x>>y;
	
	for(int i=x; i<=y; i+=60){
		cout<<"All positions change in year "<<i<<"\n";
	}
}