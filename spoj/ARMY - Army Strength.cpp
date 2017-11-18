#include <iostream>
 
using namespace std;
 
 
int main(){
	int t;cin>>t;
	while(t--){
		int g,m;cin>>g>>m;
		int gg=0,mm=0;
		while(g--){
			int x;cin>>x;
			if(x>gg) gg=x;
		}
		while(m--){
			int x;cin>>x;
			if(x>mm) mm=x;
		}
		if(gg>=mm) cout<<"Godzilla"<<endl;
		else cout<<"MechaGodzilla"<<endl;
	}
	return 0;
} 