#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, o, eo;
	
	cin>>n>>o>>eo;
	
	int x = n - o;
	int ex = n-eo;
	
	int answer = 0;
	
	if(o >= eo){
		answer += eo;
	}
	else{
		answer += o;
	}
	
	if(x >= ex){
		answer += ex;
	}
	else{
		answer += x;
	}
	
	cout<<answer;
}