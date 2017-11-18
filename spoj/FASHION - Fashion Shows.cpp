#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> men(n), women(n);
		for(auto& x: men) cin>>x;
		for(auto& x: women) cin>>x;
		sort(men.begin(), men.end());
		sort(women.begin(), women.end());
		int sum = 0;
		for(int i=0;i<n;i++) sum += men[i]*women[i];
		cout<<sum<<endl;
	}
	return 0;
} 