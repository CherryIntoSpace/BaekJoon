#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
void getTime(string s, int time[]){
	istringstream ss(s);
	
	string buffer;
	int i = 0;
	while(getline(ss,buffer,':')){
		time[i++] = stoi(buffer);
	}
}
int solve(int stime[], int etime[]){
	int sh = stime[0], sm = stime[1], ss = stime[2];
	int eh = etime[0], em = etime[1], es = etime[2];
	int sum = 0;
	
	if(es - ss < 0){
		sum += (es - ss) + 60;
		em--;
	}
	else{
		sum += (es - ss);
	}
	
	if(em - sm < 0){
		sum += ((em - sm) + 60) * 60;
		eh--;
	}
	else{
		sum += (em - sm) * 60;
	}
	
	if(eh - sh < 0){
		sum += ((eh - sh) + 24) * 3600;
	}
	else{
		sum += (eh - sh) * 3600;
	}
	
	return sum;
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string start, end;
	int stime[3], etime[3];
	
	getline(cin,start);
	getline(cin, end);
	
	
	getTime(start,stime);
	getTime(end,etime);
	
	cout<<solve(stime,etime);
}