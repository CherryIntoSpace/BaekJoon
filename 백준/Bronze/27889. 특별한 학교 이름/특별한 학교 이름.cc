#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	
	string s;
	
	cin>>s;
	
	if(s == "NLCS") cout<<"North London Collegiate School";
	else if(s == "BHA") cout<<"Branksome Hall Asia";
	else if(s == "KIS") cout<<"Korea International School";
	else cout<<"St. Johnsbury Academy";
}