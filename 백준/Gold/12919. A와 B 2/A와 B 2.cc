#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int answer = 0;
void solve(string in, string out){
	if(in == out){
		answer += 1;
		return;
	}
	else if(in.length() > out.length()){
		answer += 0;
		return;
	}
	
    if(out[out.length()-1] == 'A'){
        string t = out;
        t.erase(t.length()-1);
        solve(in,t);
    }
    if(out[0] == 'B'){
        string t = out;
        reverse(t.begin(), t.end());
        t.erase(t.length()-1);
        solve(in,t);
    }
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string a, b;
	
	cin>>a>>b;
	
	solve(a,b);
	
	if(answer>=1) cout<<1;
	else cout<<0;
	
}