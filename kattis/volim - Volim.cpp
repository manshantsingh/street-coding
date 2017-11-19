#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,q,timeRemaining=210;cin>>n>>q;
    while(q--){
        int t;char c;
        cin>>t>>c;
        timeRemaining-=t;
        if(timeRemaining<=0) break;
        if(c=='T') n=n%8+1;
    }
    cout<<n<<endl;
    return 0;
}