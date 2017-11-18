#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int fast_pow(int base, int pow){
	int result = 1;
	while(pow>0){
		if(pow&1) result=(result*base)%10;
		base=(base*base)%10;
		pow>>=1;
	}
	return result;
}
 
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		cout<<fast_pow(a%10,b)<<endl;
	}
	return 0;
} 