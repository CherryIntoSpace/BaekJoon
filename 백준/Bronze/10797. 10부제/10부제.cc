#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	int car[5];
	int cnt = 0;
	
	cin>>n;
	for(int &x : car) cin>>x;
	
	for(int x : car){
		if(n == x){
			cnt++;
		}
	}
	
	cout<<cnt;
}