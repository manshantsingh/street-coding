#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<int> coins(m);
    for(int& x: coins) cin>>x;
    sort(coins.begin(), coins.end());
	vector<long long unsigned> dp(n+1,0);
	dp[0]=1;
	for(int c: coins){
		for(int i=c;i<=n;i++){
			dp[i]+=dp[i-c];
		}
	}
	cout<<dp[n]<<endl;
}