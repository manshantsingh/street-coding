#include <iostream>
 
using namespace std;
 
int main(){
 
	int t;cin>>t;
	while(t--){
		int n,x,y;cin>>n>>x>>y;
		int a=x;
		do{
			if(a%x==0 && a%y!=0) cout<<a<<" ";
		}while(++a<n );
		cout<<endl;
	}
 
	return 0;
} 