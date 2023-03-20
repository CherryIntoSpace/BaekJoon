#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long a,b;
	cin>>a>>b;
	
	if(a > b) swap(a,b);
	a--;
	
	long long answer = (((b+a)*(b-a))+b-a) / 2;
	cout<<answer;
}