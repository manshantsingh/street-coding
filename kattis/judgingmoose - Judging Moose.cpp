#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    if(a==0 && b==0) cout<<"Not a moose"<<endl;
    else cout<<(a==b?"Even ":"Odd ")<<(max(a,b)*2)<<endl;
}