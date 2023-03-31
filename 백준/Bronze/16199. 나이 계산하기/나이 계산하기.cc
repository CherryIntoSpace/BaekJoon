#include <iostream>
using namespace std;

int by, bm, bd;
int ty, tm, td;

void solve1(){
	int age = 0;
	
	age += ty - by;
	
	if(tm < bm){
		age--;
	}
	else if((tm == bm) && (td < bd)){
		age--;
	}
	
	cout<<age<<"\n";
}
void solve2(){
	int age = 1;
	
	if(ty > by){
		age += ty - by;
	}
	
	cout<<age<<"\n";
}
void solve3(){
	int age = 0;
	
	if(ty > by){
		age += ty - by;
	}
	
	cout<<age<<"\n";
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin>>by>>bm>>bd>>ty>>tm>>td;
	
	solve1();
	solve2();
	solve3();
}