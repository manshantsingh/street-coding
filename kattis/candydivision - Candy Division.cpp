#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
    ull n; cin>>n;
    ull lim=(ull)(sqrt(n)+2);
    set<ull> s;
    for(ull i=1;i<lim;i++){
        if(n%i==0) s.insert(i - 1), s.insert(n/i - 1);
    }
    auto it=s.begin();
    cout<<*it;
    it++;
    for(;it!=s.end();it++){
        cout<<' '<<*it;
    }
    cout<<endl;
}
