#include <iostream>
#include <string>
using namespace std;
int cost(const string &from, const string& to){
    int i=0, n=min(from.size(), to.size());
    for(i=0;i<n;i++) if(from[i]!=to[i]) break;
    return from.size() + to.size() - 2*i;
}
int main(){
    int t;cin>>t;
    while(t--){
        string arr[5];
        for(int i=0;i<5;i++) cin>>arr[i];
        int ans = cost(arr[1], arr[0]);
        for(int i=2;i<5;i++) ans = min(ans, cost(arr[i], arr[0])+1);
        cout<<ans<<endl;
    }
    return 0;
}