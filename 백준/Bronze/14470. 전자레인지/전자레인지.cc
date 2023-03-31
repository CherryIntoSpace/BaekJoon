#include <iostream>
using namespace std;

int start, goal;
int mToz, zTop, pTog;
int sum = 0;

void solve(){
	if(start < 0){
		start *= -1;
		
		sum += start * mToz;
		sum += zTop;
		sum += goal * pTog;
	}
	else if(start > 0){
		sum += (goal - start) * pTog;
	}
}
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin>>start>>goal>>mToz>>zTop>>pTog;
	
	solve();
	
	cout<<sum;
}