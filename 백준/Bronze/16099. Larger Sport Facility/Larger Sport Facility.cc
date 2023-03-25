#include <iostream>
using namespace std;
int main(int argc, char** argv) { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
    long long lt, wt, le, we;
    
   	cin>>n;
   	
   	while(n--){
   		cin>>lt>>wt>>le>>we;
    
   		long long t = lt * wt;
    	long long e = le * we;
    	
    	if(t > e){
    		cout<<"TelecomParisTech\n";
		}
		else if(t < e){
			cout<<"Eurecom\n";
		}
		else{
			cout<<"Tie\n";
		}
	}
}