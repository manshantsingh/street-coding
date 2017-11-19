#include <bits/stdc++.h>
using namespace std;
struct edge_info{
    int v,t,p,d;
};
int main(){
    bool first=true;
    while(1){
        int N,M,Q,S; cin>>N>>M>>Q>>S;
        if(!(N||M||Q||S)) break;
        if(first) first=false;
        else cout<<endl;
        vector<vector<edge_info>> grid(N);
        while(M--){
            edge_info n; int u;
            cin>>u>>n.v>>n.t>>n.p>>n.d;
            grid[u].push_back(n);
        }
        vector<pair<int,bool>> cost(N, {-1,false});
        set<pair<int,int>> s{{0,S}};
        cost[S]={0,true};
        while(!s.empty()){
            auto p = *s.begin();
            s.erase(s.begin());
            cost[p.second].second=true;
            for(auto e: grid[p.second]){
                auto& cc = cost[e.v];
                if(cc.second) continue;
                int nextTime = e.t;
                if(p.first > e.t && e.p>0){
                    nextTime = ((p.first-e.t-1)/e.p+1)*e.p+e.t;
                }
                if(nextTime<p.first) continue;
                if(cc.first==-1 || nextTime+e.d<cc.first){
                    s.erase({cc.first, e.v});
                    cc.first = nextTime+e.d;
                    s.insert({cc.first, e.v});
                }
            }
        }
        while(Q--){
            int a; cin>>a;
            a = cost[a].first;
            if(a==-1) cout<<"Impossible"<<endl;
            else cout<<a<<endl;
        }
    }
}