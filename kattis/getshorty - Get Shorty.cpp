#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <set>
#include <functional>
using namespace std;
int main(){
    cout<<fixed<<setprecision(4);
    while(true){
        int n,m;cin>>n>>m;
        if(n==0 && m==0) break;
        vector<vector<pair<int,double>>> graph(n);
        while(m--){
            int x,y;double f;
            cin>>x>>y>>f;
            graph[x].push_back({y,f});
            graph[y].push_back({x,f});
        }
        vector<double> cost(n, -1);
        cost[0]=1;
        set<pair<double,int>, greater<pair<double,int>>> active;
        active.insert({1,0});
        while(!active.empty()){
            int current=active.begin()->second;
            if(current == n-1) break;
            active.erase(active.begin());
            for(auto x: graph[current]){
                if(cost[x.first] < cost[current] * x.second){
                    active.erase({cost[x.first], x.first});
                    cost[x.first] = cost[current] * x.second;
                    active.insert({cost[x.first], x.first});
                }
            }
        }
        cout<<cost[n-1]<<endl;
    }
    return 0;
}