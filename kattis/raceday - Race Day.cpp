#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <tuple>
#include <utility>
using namespace std;
void rank_racer(map<string, pair<int,int>>& m){
    auto it=m.begin();
    it->second.second=1;
    auto it2 = it;it2++;
    while(it2!=m.end()){
        it2->second.second=it->second.first+it->second.second;
        it=it2;
        it2++;
    }
}
int main() {
    while(true){
        int n;cin>>n;
        if(n==0) break;
        map<string, string> racers;
        unordered_map<string, tuple<string,string,string>> hash;
        map<string, pair<int,int>> s1,s2,ff;
        for(int i=0;i<n;i++){
            string f,l,b; cin>>f>>l>>b;
            racers[l+", "+f]=b;
        }
        for(int i=0;i<3*n;i++){
            string b,p,t;
            cin>>b>>p>>t;
            if(p=="S1"){
                get<0>(hash[b])=t;
                s1[t].first++;
            }
            else if(p=="S2"){
                get<1>(hash[b])=t;
                s2[t].first++;
            }
            else{
                get<2>(hash[b])=t;
                ff[t].first++;
            }
        }
        rank_racer(s1);rank_racer(s2);rank_racer(ff);
        cout<<"NAME                       BIB    SPLIT1      RANK    SPLIT2      RANK    FINISH      RANK"<<endl;
        for(auto x: racers){
            auto& h=hash[x.second];
            cout<<left<<setw(20)<<x.first<<right
                <<setw(10)<<x.second
                <<setw(10)<<get<0>(h)
                <<setw(10)<<s1[get<0>(h)].second
                <<setw(10)<<get<1>(h)
                <<setw(10)<<s2[get<1>(h)].second
                <<setw(10)<<get<2>(h)
                <<setw(10)<<ff[get<2>(h)].second
                <<endl;
        }
        cout<<endl;
    }
    return 0;
}