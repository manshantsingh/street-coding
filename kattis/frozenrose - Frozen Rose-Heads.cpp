#include <iostream>
#include <unordered_map>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
unordered_map<int, vector<pair<int,int>> > m;
vector<bool> v;
int func(int node){
    int sum = 0;
    for(const auto& x: m[node]){
        if(v[x.first]) continue;
        v[x.first] = true;
        int val = func(x.first);
        if(val > 0) sum += min(x.second, val);
        else sum += x.second;
    }
    return sum;
}
int main(){
    int n,c;
    while(cin>>n>>c){
        m.clear();
        for(int i=1;i<n;i++){
            int u,v,w; cin>>u>>v>>w;
            m[u].push_back({v,w});
            m[v].push_back({u,w});
        }
        v.clear();
        v.resize(n+1, false);
        v[c]=true;
        cout<<func(c)<<endl;
    }
    return 0;
}