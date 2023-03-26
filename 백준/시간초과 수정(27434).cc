#include <iostream>
#include <vector>
#include <complex>
#include <string>
#include <algorithm>
using namespace std;

const double PI = acos(-1); 
typedef complex<double> cpx; 

void FFT(vector<cpx>& f, cpx w) {
	int n = f.size();
	if (n == 1) return; 

	vector<cpx> even(n / 2), odd(n / 2);
	for (int i = 0; i < n; i++)
		(i % 2 ? odd : even)[i / 2] = f[i];

	FFT(even, w * w);
	FFT(odd, w * w);

	cpx wp(1);

	for (int i = 0; i < n / 2; i++) {
		f[i] = even[i] + wp * odd[i];
		f[i + n / 2] = even[i] - wp * odd[i];
		wp *= w;
	}
}

vector<cpx> multiply(vector<cpx> a, vector<cpx> b) {
	int n = 1;
	while (n < a.size() + 1 || n < b.size() + 1){
		n *= 2;
	}
	n *= 2; 
	a.resize(n);
	b.resize(n);
	vector<cpx> c(n);

	cpx w(cos(2 * PI / n), sin(2 * PI / n));

	FFT(a, w);
	FFT(b, w);

	for (int i = 0; i < n; i++)
		c[i] = a[i] * b[i];

	FFT(c, cpx(1) / w); 
	for (int i = 0; i < n; i++) {
		c[i] /= cpx(n); 
		c[i] = cpx(round(c[i].real()), round(c[i].imag())); 
	}
	return c;
}
vector<cpx> SetXvector(int i){
	string str = to_string(i);
	vector<cpx> x;
	
	for(char c : str){
		x.push_back(cpx(c-'0'));
	}
	
	reverse(x.begin(), x.end());
	
	return x;
}
vector<cpx> SetYvector(string s){
	vector<cpx> y;
	
	for(char c : s){
		y.push_back((c-'0'));
	}
	
	reverse(y.begin(), y.end());
	
	return y;
}
vector<int> GetAnswerVector(vector<cpx> z){
	int len = z.size();
	int carry = 0;
	vector<int> ans;
	
	for(int i=0; i<len; ++i){
		int n = (int)round(z[i].real()) + carry;
		carry = n / 10;
		ans.push_back(n % 10);
	}
	
	while(carry > 0){
		ans.push_back(carry % 10);
		carry /= 10;
	}
	
	return ans;
}
string GetAnswerString(vector<int> ans){
	string answer= "";
	
	for(int x : ans){
		answer += (x + '0');
	}
	
	reverse(answer.begin(), answer.end());
	
	int NonZeroIndex = answer.length();
	for(int i=0; i<answer.length(); ++i){
		if(answer[i] != '0'){
			NonZeroIndex = i;
			break;
		}
	}
	
	return answer.substr(NonZeroIndex, answer.length());
}
int main(int argc, char** argv) {
	
	int n;
	
	cin>>n;
	
	string dp[n+1];
	dp[0] = "1";
	dp[1] = "1";
	
	vector<cpx> x, y, z;
	vector<int> ans;
	
	for(int i=2; i<=n; ++i){
		x = SetXvector(i);
		y = SetYvector(dp[i-1]);
		z = multiply(x, y);
		ans = GetAnswerVector(z);
		dp[i] = GetAnswerString(ans);
	}
	
	cout<<dp[n];
}
