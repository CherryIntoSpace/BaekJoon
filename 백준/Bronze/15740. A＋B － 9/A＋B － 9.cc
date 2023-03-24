#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool isBigger(string x, string y){
	//x가 y보다 크면 true를 return  
	//x의 길이가 y의 길이보다 길면 무조건 x가 큼을 의미  
	if(x.length() > y.length()){
		return true;
	}
	//만약 x와 y의 길이가 서로 같다면 둘 중 제일 높은 자릿수의 자릿값이 더 큰 쪽이 큰 수임을 의미함  
	else if(x.length() == y.length()){
		for(int i=0; i<x.length(); ++i){
			if(x[i] > y[i]){
				return true;
			}
		}
	}
	//x가 y보다 작으면 false를 return 
	return false;
}
string add(string x, string y){
	int num;
	int carry = 0;
	string result;
	
	//제일 뒷자리 수부터 계산해야 하므로 문자열 반전
	reverse(x.begin(),x.end());		 
	reverse(y.begin(),y.end());
	
	//x와 y중 긴 문자열에 자릿수 맟춰주기. 제일 긴 문자열은 while문 패스 
	while(x.length()<y.length()) x += '0';		 
	while(y.length()<x.length()) y += '0';		
	
	for(int i=0; i<x.length(); ++i){
		num = (x[i]-'0' + y[i]-'0' + carry) % 10;
		//x와 y의 i번째 문자를 정수로 변환하고 x와 y를 더한 뒤 이전의 캐리(받아올림)만큼 더해줌
		//mod 10을 하여 나머지(1의 자리)를 num에 저장 
		
		result += to_string(num);
		//정수형인 num을 문자열로 변환하여 result에 추가 
		
		carry = (x[i]-'0' + y[i]-'0' + carry) / 10;
		//x와 y의 i번째 문자와 이전의 캐리끼리 더했을 때 받아올림이 일어나면 / 10을 했을 때 몫이
		//1이 나온다. 다음 i+1번째 문자 계산을 위하여 캐리에 1을 저장한다. 
	}
	
	//마지막 문자까지 계산을 다 했을 때, 캐리에 값이 존재하면(!=0) 자릿수를 증가시킨다.
	if(carry != 0){
		result += to_string(carry);
	}
	
	//처음에 반전된 문자열로 계산했으므로 재반전한 것이 result 
	reverse(result.begin(),result.end());
	
	return result;
}
string subtract(string x, string y){
	//큰 값에서 작은 값을 빼야 하므로 x가 y보다 작으면 swap해줌 
	if(!isBigger(x, y)){
		swap(x,y);
	}
	int num;
	int carry = 0;
	//add와 마찬가지로 맨 뒷자리수부터 계산해야 하므로 reverse() 적용
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	
	/*뺄셈은 덧셈과 달리 받아올림이 발생하여 새로운 자릿수가 만들어지는 것이 아닌 기존 큰 수에서 작은 수를 빼는 것인, 
	오히려 자릿수가 내려가는 계산이므로 결과인 result를 큰 수인 x로 지정하고 
	result를 갱신하여 결과값을 만들어내는 것으로 함 */ 
	string result = x;
	
	for(int i = 0; i<result.length(); ++i){
		//연쇄 받아내림을 대비하여 tempcarry 변수에 carry 값 임시 저장 
		int tempcarry = carry;
		carry = 0;
		//num에 이전 자릿수에서 넘어온 carry만큼 먼저 빼줌 
		num = (x[i] - '0') - tempcarry;
		
		//num이 음수라면 다음 자릿수의 자릿값에 carry를 넘겨주고 num에 +10을 하여 양수로 바꿔줌 
		if(num < 0){
			carry = 1;
			num += 10;
		}
		
		/*작은 수인 y의 최대 자릿수까지 도달하기 전까지 num-y[i]를 계속하고,
		다음 자리수를 위한 carry를 만드는 것을 반복함*/
		if(i < y.length()){
			num -= (y[i]-'0');
			if(num < 0){
				carry = 1;
				num += 10;
			}
		}
		//이렇게 x에서 y를 뺀 결과물 num을 result의 해당 인덱스 i에 덧붙여주는 식으로 result를 만들어줌   
		result[i] = num + '0';
	}
	
	//끝까지 뺄셈을 수행했을 때 carry 값이 남아있다면 제일 끝자리 수를 -1 해줌으로써 마지막 받아내림까지 수행해줌 
	if(carry){
		int lastNum = result[result.length() - 1];
		lastNum--;
		result[result.length() - 1] = lastNum + '0';
	}
	
	//처음에 result를 reverse 했으므로 원하는 결과값을 얻기위해 다시 reverse 
	reverse(result.begin(), result.end());
	
	//앞자리수가 0이면 해당 자리는 필요없으므로 잘라내야 하는 구간을 설정해줌 
	//자릿값이 0이 아닌 인덱스를 발견하면 이를 저장한뒤 즉시 break 하고 다음 진행
	//NonzeroIndex의 초기값은 result의 길이로 지정 
	int NonzeroIndex = result.length();
	for(int i=0; i<result.length(); ++i){
		if(result[i] != '0'){
			NonzeroIndex = i;
			break;
		}
	}
	/*만약 반복문을 끝까지 진행했음에도 자릿값이 0이 아닌 인덱스가 발견되지 않는다면
	모든 자릿수의 자릿값이 0, 즉 결과값이 0이므로 그냥 0을 return함*/
	if(NonzeroIndex == result.length()){
		return "0";
	}
	//result에서 0이 아닌 자릿값의 인덱스부터 result의 끝 인덱스까지 잘라내어 return함 
	return result.substr(NonzeroIndex,result.length());
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string x, y;
	
	cin>>x>>y;
	
	//두 수 모두 양수이면 단순 덧셈 후 출력 
	if((x[0] != '-') && (y[0] != '-')){
		cout<<add(x, y);
	}
	/*두 수 모두 음수이면 제일 앞 글자인 '-'를 잘라내고(절댓값 변환) 단순덧셈, 
	결과값에 '-'를 붙여 출력*/
	else if((x[0] == '-') && (y[0] == '-')){
		x = x.substr(1, x.length());
		y = y.substr(1, y.length());
		cout<<"-"<<add(x, y);
	}
	//x가 양수, y가 음수인 경우 
	else if((x[0] != '-') && (y[0] == '-')){
		//y의 '-' 잘라내기 
		y = y.substr(1, y.length());
		
		//(절댓값)x가 y보다 크거나 x와 y 서로 같다면 두 수를 뺐을 때 양수가 나옴 
		if(isBigger(x, y) || (x.compare(y) == 0)){
			cout<<subtract(x,y);
		}
		/*반대로 (절댓값)x가 y보다 작거나 서로 값이 다르면 두 수를 뺐을 때 음수가 나옴
		또한 subtract 내부에서 swap으로 x가 큰 값, y가 작은 값이 됨 
		따라서 결과값은 '-'를 붙여 출력*/ 
		else{
			cout<<"-"<<subtract(x,y);
		}
	}
	//x가 음수 y가 양수인 경우 
	else if((x[0] == '-') && (y[0] != '-')){
		//x의 '-' 잘라내기 
		x = x.substr(1, x.length());
		
		/*ex) x = -60, y = 40인 경우 x의 절댓값이 더 크고 두 수가 같지 않으므로  
		60에서 40을 빼고 20에 '-'를 붙여 출력함*/
		if(isBigger(x,y) && (x.compare(y) != 0)){
			cout<<"-"<<subtract(x,y);
		}
		/*반대로 (절댓값)x가 y보다 작거나 서로 값이 다르면 두 수를 뺐을 때 음수가 나옴
		또한 subtract 내부에서 swap으로 x가 큰 값, y가 작은 값이 됨 
		따라서 결과값은 양수로 그대로 출력*/ 
		else cout<<subtract(x,y);
	}
}