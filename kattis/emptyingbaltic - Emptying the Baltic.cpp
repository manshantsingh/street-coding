#include <bits/stdc++.h>
using namespace std;
int dc[8]={-1, 0, 1,-1, 1,-1, 0, 1};
int dr[8]={-1,-1,-1, 0, 0, 1, 1, 1};
int main(){
    int r,c; cin>>r>>c;
    vector<vector<pair<int,bool>>> v(r, vector<pair<int,bool>>(c));
    for(auto& x: v){
        for(auto& y: x) {
            cin>>y.first;
            y.first = -y.first;
            y.second = y.first<=0;
        }
    }
    int a,b; cin>>a>>b;
    a--;b--;
    priority_queue<tuple<int,int,int>> q;
    q.push(make_tuple(v[a][b].first,a,b));
    while(q.size()){
        int h;
        tie(h,r,c) = q.top();
        q.pop();
        if(v[r][c].second) continue;
        h=min(h,v[r][c].first);
        v[r][c]={h,true};
        // cout<<"r:"<<r<<", c:"<<c<<", h:"<<h<<", val:"<<v[r][c].first<<endl;
        for(int i=0;i<8;i++){
            int rr=r+dr[i], cc=c+dc[i];
            if(rr<0||rr>=v.size()||cc<0||cc>=v[0].size()||v[rr][cc].second) continue;
            q.push(make_tuple(h,rr,cc));
        }
    }
    long long int ll=0;
    for(auto& x: v){
        for(auto& y: x){
            // cout<<y.first<<"\t";
            if(y.first>0 && y.second) ll += y.first;
        }
        // cout<<endl;
    }
    cout<<ll<<endl;
}