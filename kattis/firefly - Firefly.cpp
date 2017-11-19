#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h; cin>>n>>h;
    vector<int> up(h, 0), down(h, 0);
    while(n--){
        int a; cin>>a;
        if(n&1){
            up[a-1]++;
        } else {
            down[h-a]++;
        }
    }
    for(int i=h-2;i>=0;i--){
        up[i]+=up[i+1];
    }
    for(int i=1;i<h;i++){
        down[i]+=down[i-1];
    }
    int m=500000, count=0;
    for(int i=0;i<h;i++){
        int val = up[i]+down[i];
        if(m==val) count++;
        else if(m>val){
            m=val;
            count=1;
        }
    }
    cout<<m<<" "<<count<<endl;
    return 0;
}