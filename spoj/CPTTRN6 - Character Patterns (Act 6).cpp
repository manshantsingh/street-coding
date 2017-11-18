#include <iostream>
 
using namespace std;
 
int main(){
 
	int t;cin>>t;
 
	while(t--){
		int r,c,h,w;
		cin>>r>>c>>h>>w;
 
		
		for(int i=0;i<=r;i++){
			int a=h+1;
			while(a--){
				for(int j=0;j<=c;j++){
					int b=w+1;
					while(b--){
						if(b>0){
							if(a>0) cout<<".";
							else if(i<r) cout<<"-";
						}
						else if(j<c){
							if(a>0) cout<<"|";
							else if(i<r) cout<<"+";
						}
					}
				}
				cout<<endl;
			}
		}
	}
 
	return 0;
} 