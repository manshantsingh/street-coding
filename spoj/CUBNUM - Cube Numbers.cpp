#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main(){
	vector<int> dp(100001);
	dp[0]=0;dp[1]=1;
	for(int i=2;i<dp.size();i++){
		dp[i]=i;
		int c=cbrt(i)+2;
		while(c*c*c>i) c--;
		for(int j=c;j>0;j--) if(dp[i-j*j*j]<dp[i]) dp[i]=dp[i-j*j*j]+1;
	}
	int i=1,n;
	while(cin>>n) cout<<"Case #"<<i++<<": "<<dp[n]<<endl;
	return 0;
} 