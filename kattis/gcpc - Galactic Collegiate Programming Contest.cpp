#include <bits/stdc++.h>
using namespace std;
int main() {
    multiset<pair<int,int>> s;
    int n, m; cin>>n>>m;
    vector<pair<int,int>> v(n, {0,0});
    while(m--){
        int a,b; cin>>a>>b; a--;
        auto old = v[a];
        v[a].first++;
        v[a].second -= b;
        if(a==0){
            s.erase(s.begin(), s.upper_bound(v[0]));
        }
        else if(v[a]>v[0]){
            if(old>v[0]) s.erase(s.find(old));
            s.insert(v[a]);
        }
        cout<<s.size()+1<<endl;
    }
}