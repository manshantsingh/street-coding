#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
int main(){
	int a,d;cin>>a>>d;
	while(a!=0 && d!=0){
		vector<int> aa(a), dd(d);
		for(auto& x: aa) cin>>x;
		for(auto& x: dd) cin>>x;
		sort(aa.begin(), aa.end());
		sort(dd.begin(), dd.end());
		bool offside=false;
		for(auto x: aa) if(x<dd[1]){
			offside=true;
			break;
		}
		cout<<(offside?'Y':'N')<<endl;
		cin>>a>>d;
	}
	return 0;
} 