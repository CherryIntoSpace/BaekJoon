#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int cake, h, v;
	
	cin>>cake>>h>>v;
	
	int mh = max(h,cake-h);
	int mv = max(v,cake-v);
	
	cout<<mh * mv * 4;
}