#include <iostream>
#include <map>
#include <iomanip>
#include <utility>
using namespace std;
int main(){
    int n;cin>>n;
    map<long long, pair<long long,long long>> m;
    while(n--){
        long long t;int d,r;
        cin>>t>>d>>r;
        m[t-d].first += r;
        m[t].first -= r;
    }
    auto it=m.begin();
    auto tempit=it;
    while(++it!=m.end()){
        it->second.first += tempit->second.first;
        tempit=it;
    }
    it=m.begin();
    tempit=it;
    while(++it!=m.end()){
        it->second.second=(it->first - tempit->first) * tempit->second.first + tempit->second.second;
        tempit=it;
    }
    int q;cin>>q;
    cout<<fixed<<setprecision(3);
    while(q--){
        long long a, b;cin>>a>>b;
        auto ita=m.upper_bound(a), itb=m.upper_bound(b);
        long long ap=0,bp=0;
        if(ita!=m.begin()){
            ita--;
            ap = (a - ita->first)*ita->second.first + ita->second.second;
        }
        if(itb!=m.begin()){
            itb--;
            bp = (b - itb->first)*itb->second.first + itb->second.second;
        }
        cout<<((bp-ap)/1000.0)<<endl;
    }
    return 0;
}