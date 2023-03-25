#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
string subtract(string b, string c){
	int num;
	int carry = 0;
	
	reverse(b.begin(), b.end());
	reverse(c.begin(), c.end());
	
	string result = b;
	
	for(int i=0; i<result.length(); ++i){
		int tempcarry = carry;
		carry = 0;
		
		num = (b[i] - '0') - tempcarry;
		
		if(num < 0){
			carry = 1;
			num += 10;
		}
		
		if(i < c.length()){
			num -= (c[i] - '0');
			if(num < 0){
				carry = 1;
				num += 10;
			}
		}
		result[i] = num + '0';
	}
	
	if(carry != 0){
		int lastNum = result[result.length() - 1];
		lastNum--;
		result[result.length() - 1] = lastNum + '0';
	}
	reverse(result.begin(), result.end());
	
	int NonZeroIndex = result.length();
	for(int i=0; i<result.length(); ++i){
		if(result[i] != '0'){
			NonZeroIndex = i;
			break;
		}
	}
	if(NonZeroIndex == result.length()){
		return "0";
	}
	
	return result.substr(NonZeroIndex, result.length());
}
string divide(string bc, long long a){
	long long num = 0;
	string result;
	
	for(long long i = 0; i<bc.length(); ++i){
		num = (num*10) + (bc[i]-'0');
		result += (num/a) + '0';
		num %= a;
	}
	
	int NonZeroIndex = result.length();
	for(int i=0; i<result.length(); ++i){
		if(result[i] != '0'){
			NonZeroIndex = i;
			break;
		}
	}
	if(NonZeroIndex == result.length()){
		return "0";
	}
	
	return result.substr(NonZeroIndex,result.length());
}
int main(int argc, char** argv) { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
	long long a;
	string b, c;
	
	cin>>a>>b>>c;
	
	string bc = subtract(b,c);
	
	cout<<divide(bc,a);
}