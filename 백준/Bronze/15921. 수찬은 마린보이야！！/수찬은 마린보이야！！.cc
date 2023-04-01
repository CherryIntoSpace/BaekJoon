#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	double n, num[101]={0,};
	double sum = 0;
	double avg, exp = 0.0;
	int x;
	
	cin>>n;
	
	if(n == 0){
		cout<<"divide by zero";
		return 0;
	}
	
	for(int i=0; i<n; ++i){
		cin>>x;
		
		num[x]++;
		sum += x;
	}
	
	avg = sum / n;
	
	for(int i=1; i<=100; ++i){
		if(num[i] >= 1){
			exp += i * (num[i] / n);
		}
	}
	
	if(exp == 0){
		cout<<"divide by zero";
		return 0;
	}
	
	cout<<fixed;
	cout.precision(2);
	
	cout<<avg / exp;
}