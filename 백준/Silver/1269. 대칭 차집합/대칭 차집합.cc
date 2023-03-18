#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std; 
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a_size, b_size,x;
	cin>>a_size>>b_size;
	
	set<int> a,b;
	for(int i=0; i<a_size; ++i){
		cin>>x;
		a.insert(x);
	}
	for(int i=0; i<b_size; ++i){
		cin>>x;
		b.insert(x);
	}
	
	int a_b = 0, b_a = 0;
	set<int>::iterator iter;
	for(iter = a.begin(); iter != a.end(); ++iter){
		if(b.find(*iter) != b.end()) a_b++;
	}
	for(iter = b.begin(); iter != b.end(); ++iter){
		if(a.find(*iter) != a.end()) b_a++;
	}
	
	int r1 = a_size - a_b;
	int r2 = b_size - b_a;
	
	cout<<r1+r2;
}