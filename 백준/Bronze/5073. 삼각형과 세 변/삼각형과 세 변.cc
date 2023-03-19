#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
string Tri_type(int a, int b, int c){
	int tri[3];
	int mx, index;
	tri[0] = a; tri[1] = b; tri[2] = c;
	
	sort(tri,tri+3);
	
	if(tri[2] >= tri[0] + tri[1]) return "Invalid";
	else if((tri[0] == tri[1]) && (tri[1] == tri[2]) && (tri[0] == tri[2])) return "Equilateral";
	else if((tri[0] != tri[1]) && (tri[1] != tri[2]) && (tri[0] != tri[2])) return "Scalene";
	
	for(int i=0; i<3; ++i){
		for(int j=i+1; j<3; ++j){
			if(tri[i] == tri[j]) return "Isosceles";
		}
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 1, b = 1, c = 1;
	
	while(true){
		cin>>a>>b>>c;
		
		if((a == 0) && (b == 0) && (c == 0)) break;
		cout<<Tri_type(a,b,c)<<"\n";
	}
}