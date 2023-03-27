#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string input;
	string kda;
	vector<int> v;
	
	cin>>input;
	
	stringstream ss(input);
	while(getline(ss, kda, '/')){
		v.push_back(stoi(kda));
	}
	
	if((v[0] + v[2] < v[1]) || (v[1] == 0)){
		cout<<"hasu";
	}
	else{
		cout<<"gosu";
	}
}