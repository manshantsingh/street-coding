#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef pair<int,int> coord_t;
int abs(int a){
    return a<0?-a:a;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<coord_t> v(n+2);
        for(auto& x: v) cin>>x.first>>x.second;
        unordered_map<int,vector<int>> m;
        for(int i=0;i<n+1;i++){
            for(int j=i;j<n+2;j++){
                if(abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second)<=1000){
                    m[i].push_back(j);
                    m[j].push_back(i);
                }
            }
        }
        unordered_set<int> visited;
        queue<int> q;
        q.push(n+1);
        visited.insert(n+1);
        bool found=false;
        while(!q.empty()){
            int index=q.front();
            q.pop();
            for(int x: m[index]){
                if(x==0){
                    found=true;
                    break;
                }
                if(visited.insert(x).second) q.push(x);
            }
        }
        if(found) cout<<"happy"<<endl;
        else cout<<"sad"<<endl;
    }
    return 0;
}