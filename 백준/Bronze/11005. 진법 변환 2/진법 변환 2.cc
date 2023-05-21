#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
using namespace std;
char convert(int n){
	if(n > 9){
		n += 55;
		return char(n);
	}
	else{
		n += '0';
		return char(n);
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int in, no;
	stack<char> s;
	
	cin>>in>>no;
	
	while(true){
		if(no > in){
			s.push(convert(in));
			break;
		}
		
		s.push(convert(in % no));
		in /= no;
	}
	
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
}