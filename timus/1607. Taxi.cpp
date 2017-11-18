#include <iostream>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ans=a;
	if(a<c){
		while(true){
			a+=b;
			if(a>=c){
				ans=c;
				break;
			}
			c-=d;
			if(a>=c){
				ans=a;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}