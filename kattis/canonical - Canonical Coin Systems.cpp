#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> coins(n);
    for(int& x: coins) cin>>x;
    vector<int> dp(2000002);
    dp[0]=0;
    dp[1]=1;
    int cc=0;
    bool good=true;
    for(int i=2;i<dp.size();i++){
        if(coins[cc+1]==i) {
            dp[i]=1;
            cc++;
            continue;
        }
        dp[i]=1+dp[i-coins[cc]];
        for(int j=cc-1;j>=0;j--){
            if(dp[i-coins[j]]+1<dp[i]){
                good=false;
                break;
            }
        }
        if(!good) break;
    }
    cout<<(good?"canonical":"non-canonical")<<endl;
}