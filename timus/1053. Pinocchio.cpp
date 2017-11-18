#include <iostream>
#include <vector>
using namespace std;

typedef long long llt;

llt gcd(llt a, llt b){
	while(b){
		llt temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}

int main(){
	int n;cin>>n;
	vector<llt> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	if(n==1){
		cout<<v[0]<<endl;
		return 0;
	}
	llt val=gcd(v[0], v[1]);
	for(int i=2;i<n;i++){
		val=gcd(v[i], val);
	}
	cout<<val<<endl;
	return 0;
}