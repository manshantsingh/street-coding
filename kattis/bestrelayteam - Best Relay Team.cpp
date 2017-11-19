#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<tuple<double,double,string>> v;
    while(n--){
        string a; double b,c; cin>>a>>b>>c;
        v.push_back(make_tuple(c,b,a));
    }
    sort(v.begin(), v.end());
    double mm=100000;
    int pos=0;
    for(int i=0;i<v.size();i++){
        int done=0;
        double curr=get<1>(v[i]);
        for(int j=0;done<3;j++){
            if(j==i) continue;
            curr += get<0>(v[j]);
            done++;
        }
        if(curr<mm){
            mm=curr;
            pos=i;
        }
    }
    cout<<mm<<endl<<get<2>(v[pos])<<endl;
    int done=0;
    for(int i=0;done<3;i++){
        if(i==pos) continue;
        cout<<get<2>(v[i])<<endl;
        done++;
    }
}