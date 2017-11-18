#include <iostream>
#include <string>

using namespace std;

int dx[4]={0,1,1, 1},
	dy[4]={1,0,1,-1};

int main(){
	string arr[4];
	for(int i=0;i<4;i++) cin>>arr[i];
	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			if(arr[i][j]!='.') continue;
			for(int k=0;k<4;k++){
				int count=1;
				int x=i, y=j;
				do{
					x+=dx[k];
					y+=dy[k];
				} while(x>=0 && x<4 && y>=0 && y<4 && arr[x][y]=='x' && count++);
				x=i; y=j;
				do{
					x-=dx[k];
					y-=dy[k];
				} while(x>=0 && x<4 && y>=0 && y<4 && arr[x][y]=='x' && count++);
				if(count>=3){
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}