#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pp_t;
pp_t minOver(pp_t a, pp_t b, int limit){
    if(a.first<limit) {
        if(b.first<limit) return max(a,b);
        return b;
    }
    if(b.first<limit) return a;
    return min(a,b);
}
int main(){
    int t; cin>>t;
    while(t--){
        int total, n; cin>>total>>n;
        vector<int> prices(n+1);
        for(int i=1;i<=n;i++) cin>>prices[i];
        vector<vector<pp_t>> dp(n+1, vector<pp_t>(total+1, {0,0}));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=total; j++){
                if(i==0||j==0) {
                    dp[i][j]={0,0};
                    continue;
                }
                if(j<prices[i]) dp[i][j]=minOver(dp[i-1][j], {prices[i],1}, j);
                else{
                    pp_t other = {dp[i-1][j-prices[i]].first + prices[i],
                                    dp[i-1][j-prices[i]].second + 1};
                    dp[i][j] = minOver(dp[i-1][j], other, j);
                }
            }
        }
        cout<<dp[n][total].first<<" "<<dp[n][total].second<<endl;
    }
}