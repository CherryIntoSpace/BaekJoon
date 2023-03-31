#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int S, A;
	
	cin>>S>>A;
	
	cout<<min((S / 2), (A / 2));
}