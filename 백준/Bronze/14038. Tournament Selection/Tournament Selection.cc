#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	char c;
	int score = 0;
	
	for(int i=0; i<6; ++i){
		cin>>c;
		
		if(c == 'W'){
			score++;
		}
	}
	
	if(score >= 5){
		cout<<1;
	}
	else if(score >= 3){
		cout<<2;
	}
	else if(score >= 1){
		cout<<3;
	}
	else{
		cout<<-1;
	}
}