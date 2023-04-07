#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int p1,s1,s2,p2;
	
	cin>>p1>>s1>>s2>>p2;
	
	int p = p1 + p2;
	int s = s1 + s2;
	
	if(p > s){
		cout<<"Persepolis";
	}
	else if(p < s){
		cout<<"Esteghlal";
	}
	else{
		if(p2 > s1){
			cout<<"Persepolis";
		}
		else if(p2 < s1){
			cout<<"Esteghlal";
		}
		else{
			cout<<"Penalty";
		}
	}
}