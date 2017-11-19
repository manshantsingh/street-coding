#include <iostream>
using namespace std;
int max(int a, int b){return a>b?a:b;}
int main(){
    int n,p;
    cin>>n>>p;
    int * arr=new int[n], * dp=new int[n]();
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]-=p;
    }
    dp[0]=arr[0];
    for(int i=1;i<n;i++) dp[i]=max(arr[i],dp[i-1]+arr[i]);
    int maximum=0;
    for(int i=0;i<n;i++) maximum=max(maximum, dp[i]);
    cout<<maximum<<endl;
    return 0;
}