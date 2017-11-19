#include <iostream>
#include <string>
#include <vector>
using namespace std;
int max(int a, int b){
    return a>b?a:b;
}
int main(){
    string a = "ABC", b = "BABC", g = "CCAABB";
    int n;cin>>n;
    int aa=0, bb=0, gg=0;
    string ans;cin>>ans;
    for(int i=0;i<n;i++){
        if(ans[i]==a[i%a.size()]) aa++;
        if(ans[i]==b[i%b.size()]) bb++;
        if(ans[i]==g[i%g.size()]) gg++;
    }
    int best = max(aa, max(bb,gg));
    cout<<best<<endl;
    if(best==aa) cout<<"Adrian"<<endl;
    if(best==bb) cout<<"Bruno"<<endl;
    if(best==gg) cout<<"Goran"<<endl;
    return 0;
}