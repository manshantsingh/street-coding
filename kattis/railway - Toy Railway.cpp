#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <array>
#include <string>
using namespace std;
int main(){
    const int CONVERT='A';
    int n,m;cin>>n>>m;
    vector<array<pair<int,int>,3>> v(n+1);
    while(m--){
        int ln,rn;char lc,rc;
        cin>>ln>>lc>>rn>>rc;
        int li=lc-CONVERT, ri=rc-CONVERT;
        v[ln][li]={rn,ri};
        v[rn][ri]={ln,li};
    }
    vector<pair<int,int>> forward(n+1), backward(n+1);
    queue<pair<int,int>> q;
    q.push(v[1][1]);
    q.push(v[1][2]);
    while(!q.empty()){
        int current = q.front().first;
        int dir = q.front().second;
        q.pop();
        if(!current) continue;
        if(dir){
            if(backward[current].first) continue;
            backward[current] = v[current][dir];
            q.push(v[current][0]);
        }
        else{
            if(forward[current].first) continue;
            forward[current] = v[current][0];
            if(current == 1) break; // goal  = {1,0}
            q.push(v[current][1]);
            q.push(v[current][2]);
        }
    }
    if(forward[1].first){
        string seq(n+1, 'B');
        int current=1, dir=1;
        do{
            if(dir){
                dir=forward[current].second;
                current=forward[current].first;
            }
            else{
                dir=backward[current].second;
                current=backward[current].first;
            }
            if(dir==2) seq[current]='C';
        }while(current!=1 || !dir);
        cout<<seq.substr(1)<<endl;
    }
    else cout<<"Impossible"<<endl;
    return 0;
}