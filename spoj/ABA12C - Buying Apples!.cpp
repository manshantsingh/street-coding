#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<int> v(k);
		for(int i=0;i<k;i++) cin>>v[i];
		const int OUT_OF_BOUNDS=1000000000;
		for(int& x: v) if(x==-1) x=OUT_OF_BOUNDS;
		vector<int> dp(k, OUT_OF_BOUNDS);
		dp[0]=v[0];
		for(int i=1;i<k;i++){
			for(int j=0;j<=i;j++){
				dp[i]=min(dp[i], dp[i-j-1]+v[j]);
			}
		}
		if(dp[k-1]>=OUT_OF_BOUNDS) cout<<"-1"<<endl;
		else cout<<dp[k-1]<<endl;
	}
	return 0;
} 