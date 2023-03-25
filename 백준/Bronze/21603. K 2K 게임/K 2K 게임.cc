#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	string k;
	vector<int> v;
	
	cin>>n>>k;
	char check = k[k.length()-1];
	
	for(int i=1; i<=n; ++i){
		string str = to_string(i);
		char c = str[str.length()-1];
		if((c == check) || (c == (2*(check - '0') + '0'))){
			continue;
		}
		else{
			v.push_back(i);
		}
	}
	
	cout<<v.size()<<"\n";
	if(v.empty()) cout<<"\n";
	else{
		for(int x : v) cout<<x<<" ";
	}
}