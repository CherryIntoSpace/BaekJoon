#include <iostream>
using namespace std;
int main(int argc, char** argv) {ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int x[4], y[4];
	int xmax = 0, xmin = 10, ymax = 0, ymin = 10;
	
	for(int i=0; i<4; ++i){
		cin>>x[i]>>y[i];
		
		if(xmax < x[i]){
			xmax = x[i];
		}
		if(xmin > x[i]){
			xmin = x[i];
		}
		if(ymax < y[i]){
			ymax = y[i];
		}
		if(ymin > y[i]){
			ymin = y[i];
		}
	}
	
	((xmax - xmin) > (ymax - ymin)) ? cout<<(xmax - xmin)*(xmax - xmin) : cout<<(ymax - ymin)*(ymax - ymin);
}