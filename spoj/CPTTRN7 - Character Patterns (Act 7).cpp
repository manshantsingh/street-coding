#include <iostream>
 
using namespace std;
 
int main(){
 
	int t;cin>>t;
 
	while(t--){
		int r,c,s;
		cin>>r>>c>>s;
 
		for(int i=0;i<r;i++){
			int a=s*2;
			while(a--){
				for(int j=0;j<c;j++){
					int b=s*2;
					while(b--){
						if(a>=s && b>=s){
							if(a==s*3-b-1) cout<< "/";
							else cout<<".";
						}
						else if(a>=s && b<s){
							if(a-s==b) cout<<"\\";
							else cout<<".";
						}
						else if(a<s && b>=s){
							if(a==b-s) cout<<"\\";
							else cout<<".";
						}
						else if(a<s && b<s){
							if(a==s-b-1) cout<<"/";
							else cout<<".";
						}
					}
				}
				cout<<endl;
			}
		}
	}
 
	return 0;
} 