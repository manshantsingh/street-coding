#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<int, pair<int, vector<bool>>> m[2];
        
        int a; cin>>a;
        m[0][a]={a,{true}};
        for(int i=1;i<n;i++){
            auto& curr = m[i%2];
            auto& prev = m[(i-1)%2];
            curr.clear();
            cin>>a;
            for(auto& x: prev){
                int k = x.first+a;
                int v = max(k, x.second.first);
                x.second.second.push_back(true);
                auto it=curr.find(k);
                if(it==curr.end() || it->second.first>v) {
                    curr[k]={v, x.second.second};
                }
                if(x.first-a>=0){
                    k = x.first-a;
                    v = max(k, x.second.first);
                    x.second.second.back() = false;
                    auto it=curr.find(k);
                    if(it==curr.end() || it->second.first>v) {
                        curr[k]={v, x.second.second};
                    }
                }
            }
        }
        auto& curr = m[(n-1)%2];
        auto it = curr.find(0);
        if(it==curr.end()) cout<<"IMPOSSIBLE"<<endl;
        else{
            for(bool x: it->second.second){
                cout<<(x?'U':'D');
            }
            cout<<endl;
        }
    }
}