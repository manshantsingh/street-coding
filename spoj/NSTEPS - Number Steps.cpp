#include <iostream>
 
using namespace std;
 
int main(){
	int n;cin>>n;
	while(n--){
		int x,y;cin>>x>>y;
		if(x==y){
			if(x%2==0) cout<<(x*2);
			else cout<<(x*2-1);
		} else if(x==y+2){
			if(x%2==0) cout<<(x+y);
			else cout<<(y*2+1);
		}
		else cout<<"No Number";
		cout<<endl;
	}
	return 0;
} 