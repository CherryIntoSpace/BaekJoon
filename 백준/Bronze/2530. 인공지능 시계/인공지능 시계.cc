#include <iostream>
using namespace std;
void solve(int h, int m, int s, int req){
	int h2 = req / 3600;
	int m2 = (req % 3600) / 60;
	int s2 = (req % 3600) % 60;
	
	s += s2;
	if(s >= 60){
		m += (s / 60);
		s %= 60;
	}
	m += m2;
	if(m >= 60){
		h += (m / 60);
		m %= 60;
	}
	h += h2;
	if(h >= 24){
		h %= 24;
	}
	
	cout<<h<<" "<<m<<" "<<s;
}
int main(int argc, char** argv) {
	
	int h, m, s, req;
	
	cin>>h>>m>>s>>req;
	
	solve(h,m,s,req);
}