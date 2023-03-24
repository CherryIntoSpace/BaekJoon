#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string add(string x, string y){
	int num;
	int carry = 0;
	string result;
	
	reverse(x.begin(),x.end());		//계산을 편하게 하기 위한 문자열 반전 
	reverse(y.begin(),y.end());
	
	while(x.length()<y.length()) x += '0';		
	while(y.length()<x.length()) y += '0';		//x와 y중 긴 문자열에 자릿수 맟춰주기
	
	for(int i=0; i<x.length(); ++i){
		num = (x[i]-'0' + y[i]-'0' + carry) % 10;
		//x와 y의 i번째 문자를 정수로 변환하고 x와 y를 더한 뒤 이전의 캐리(자리올림)만큼 더해줌
		//mod 10을 하여 나머지(1의 자리)를 num에 저장 
		result += to_string(num);
		//정수형인 num을 문자열로 변환하여 result에 추가 
		carry = (x[i]-'0' + y[i]-'0' + carry) / 10;
		//x와 y의 i번째 문자와 이전의 캐리끼리 더했을 때 자리올림이 일어나면 / 10을 했을 때 몫이
		//1이 나온다. 다음 i+1번째 문자 계산을 위하여 캐리에 1을 저장한다. 
	}
	if(carry != 0){
		result += to_string(carry);
		//마지막 문자까지 계산을 다 했을 때, 캐리에 값이 존재하면(!=0) 자릿수 증가이다.  
	}
	reverse(result.begin(),result.end());
	//result는 반전된 문자열로 계산했으므로 우리가 원한 문자열로 재반전
	return result;
}
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string dp[10010];
    dp[0]='0'; dp[1]='1';
    cin>>n;
    for(int i=2; i<=n; ++i){
    	dp[i] = add(dp[i-1],dp[i-2]);
	}
	cout<<dp[n];
	return 0;
}