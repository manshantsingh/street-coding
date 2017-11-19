#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int& x: v) cin>>x;
        for(int i=1;i<n-1;i++){
            if(v[i-1]<v[i+1] && (v[i-1]>v[i]||v[i+1]<v[i])){
                cout<<(i+1)<<endl;
                break;
            }
        }
    }
}