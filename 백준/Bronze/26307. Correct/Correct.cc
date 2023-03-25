#include <iostream>
using namespace std;
int main(int argc, char** argv) { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int h, m;
	
	cin>>h>>m;
	
	cout<<(60 * h) + m - 540;
}