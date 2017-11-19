#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,a=99,b=0;cin>>n;
        while(n--){
            int x;cin>>x;
            a=min(a,x);
            b=max(b,x);
        }
        cout<<((b-a)*2)<<endl;
    }
    return 0;
}