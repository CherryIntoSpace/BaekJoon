#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	int a, b;
	int min = 1000;
	bool flag = false;
	
	cin>>n;
	
	int time[n];
	
	for(int i=0; i<n; ++i){
		cin>>a>>b;
		
		if(a <= b){
			time[i] = b;
			flag = true;
			if(min > b){
				min = b;
			}
		}
		else{
			time[i] = -1;
		}
	}
	
	if(flag){
		cout<<min;
	}
	else{
		cout<<-1;
	}
}