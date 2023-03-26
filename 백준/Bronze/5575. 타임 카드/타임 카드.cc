#include <iostream>
using namespace std;
void solve(int sh, int sm, int ss, int eh, int em, int es){
	int cs = es - ss;
	int cm = em - sm;
	int ch = eh - sh;
	
	if(cs < 0){
		cs += 60;
		cm--;
	}
	if(cm < 0){
		cm += 60;
		ch--;
	}
	
	cout<<ch<<" "<<cm<<" "<<cs<<"\n";
}
int main(int argc, char** argv) {
	
	int n = 3;
	int sh, sm, ss, eh, em, es;
	
	while(n--){
		cin>>sh>>sm>>ss>>eh>>em>>es;
		
		solve(sh, sm, ss, eh, em, es);
	}
}