#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b==0?a:gcd(b, a%b);
}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int& x: v) cin>>x;
    for(int i=1;i<n;i++){
        int val = gcd(v[0], v[i]);
        cout<<v[0]/val<<'/'<<v[i]/val<<endl;
    }
}
