#include <iostream>
#include<string.h>
using namespace std;
int m,n;
int directionY[4]={1,-1,0,0};
int directionX[4]={0,0,-1,1};
int map[50][50]={0};
int check[50][50]={0};
void dfs(int y, int x){
	for(int i=0; i<4; ++i){
		int editY=y+directionY[i];
		int editX=x+directionX[i];
		if(editX<0 || editY<0 || editX>=m || editY >=n) continue;
		if(map[editY][editX] == 1 && check[editY][editX] == 0){
			check[editY][editX]++;
			dfs(editY,editX);
		}
	}
}
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    
	int t;
	cin>>t;
	for(int i=0; i<t; ++i){
		int count=0;
		int result = 0;
		cin>>m>>n>>count;
		for(int j=1; j<=count; ++j){
			int x,y;
			cin>>x>>y;
			map[y][x] = 1;
		}
		for(int k=0; k<n; ++k){
			for(int l=0; l<m; l++){
				if(map[k][l]==1 && check[k][l]==0){
					result++;
					check[k][l]++;
					dfs(k,l);
				}
			}
		}
		cout<<result<<"\n";
		memset(map, 0, sizeof(map));
		memset(check, 0 ,sizeof(check));
	}
}