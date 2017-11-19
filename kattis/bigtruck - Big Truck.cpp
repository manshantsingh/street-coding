#include <bits/stdtr1c++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> items(n);
    for(int i=0;i<n;i++) cin>>items[i];
    int t;cin>>t;
    vector<vector<pair<int,int>>> graph(n);
    while(t--){
        int a,b,d;cin>>a>>b>>d;
        a--;b--;
        graph[a].push_back({b,d});
        graph[b].push_back({a,d});
    }
    vector<pair<int,int>> cost(n, {INT_MAX,0});
    cost[0]={0,-items[0]};
    for(int i=1;i<cost.size();i++) cost[i].second=-items[i];
    set<pair<pair<int,int>,int>> active;
    active.insert({cost[0],0});
    bool found=false;
    while(!active.empty()){
        int current=active.begin()->second;
        if(current==n-1){
            found=true;
            break;
        }
        active.erase(active.begin());
        for(auto x: graph[current]){
            pair<int,int> p = {cost[current].first+x.second, cost[current].second-items[x.first]};
            if(cost[x.first]> p){
                active.erase({cost[x.first], x.first});
                active.insert({cost[x.first]=p, x.first});
            }
        }
    }
    if(found) cout<<cost[n-1].first<<" "<<(-cost[n-1].second)<<endl;
    else cout<<"impossible"<<endl;
}