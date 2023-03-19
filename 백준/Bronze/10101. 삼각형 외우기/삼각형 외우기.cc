#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
int tri[3];
string Tri_type(){
	int sum = 0;
	
	for(int x : tri) sum += x;
	if(sum != 180) return "Error";
	
	if((tri[0] == tri[1]) && (tri[1] == tri[2]) && (tri[2] == tri[0])) return "Equilateral";
	
	for(int i=0; i<3; ++i){
		for(int j=i+1; j<3; ++j){
			if(tri[i] == tri[j]) return "Isosceles";
		}
	}
	return "Scalene";
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for(int &angle : tri) cin>>angle;
	cout<<Tri_type();
}