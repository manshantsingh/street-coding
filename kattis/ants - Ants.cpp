#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int t;cin>>t;
    while(t--){
        int l,n;cin>>l>>n;
        int a=0, b=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a = max(a, min(x,l-x));
            b = max(b, max(x, l-x));
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}