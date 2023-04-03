#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	string s;
	
	cin>>n;
	
	n += 3071;
	
	s.push_back(n/4096+234);
	s.push_back(n/64%64+128);
	s.push_back(n%64+128);
	
	cout<<s;
}