#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> times(n);
    for(int i=0;i<n;i++) cin>>times[i];
    sort(times.begin(), times.end());
    if(n<3){
        cout<<times[n-1]<<endl;
        return 0;
    }
    vector<int> dp(n,0);
    dp[0]=times[0];dp[1]=times[1];
    dp[2]=times[0]+times[1]+times[2];
    for(int i=3;i<n;i++){
        dp[i]=min(dp[i-2]+times[i]+2*times[1]+times[0], dp[i-1]+times[i]+times[0]);
    }
    cout<<dp[n-1]<<endl;
    return 0;
}