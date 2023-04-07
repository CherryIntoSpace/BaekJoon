#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
	double p,price;
	
	cin>>n>>p;
	
	if(n >= 20){
		price = min({p * 0.75, p - 2000, p * 0.9, p - 500});
	}
	else if(n >= 15){
		price = min({p - 2000, p * 0.9, p - 500});
	}
	else if(n >= 10){
		price = min(p * 0.9, p - 500);
	}
	else if(n >= 5){
		price = p - 500;
	}
	else{
		price = p;
	}
	
	(price < 0) ? cout<<0 : cout<<price;
}