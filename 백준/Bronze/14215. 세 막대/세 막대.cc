#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
int max_tri(int a, int b, int c){
	int tri[3];
	int sum = a+b+c;
	tri[0] = a; tri[1] = b; tri[2] = c;
	
	if((tri[0] == tri[1]) && (tri[1] == tri[2]) && (tri[0] == tri[2])) return sum;
	
	sort(tri, tri+3);
	while(true){
		if(tri[0] + tri[1] > tri[2]) break;
		tri[2]--;
	}
	sum = tri[0] + tri[1] + tri[2];
	return sum;
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<max_tri(a,b,c);
}