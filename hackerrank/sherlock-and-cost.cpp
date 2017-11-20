#include <bits/stdc++.h>
using namespace std;

int abs(int a){return a<0?-a:a;}

int main(){
    int t;cin>>t;
    while(t--){
    	int n; cin>>n;
    	vector<int> v(n);
    	for(int& x: v) cin>>x;
    	vector<vector<int>> dp(n, vector<int>(2,0));

    	for(int i=1;i<n;i++){
    		dp[i][0] = max(dp[i-1][0], dp[i-1][1]+v[i-1]-1);
    		dp[i][1] = max(dp[i-1][0]+v[i]-1, dp[i-1][1]+abs(v[i-1]-v[i]));
    	}
    	cout<<max(dp[n-1][0], dp[n-1][1])<<endl;
    }
}