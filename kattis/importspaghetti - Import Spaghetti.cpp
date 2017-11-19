#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n>>ws;
    unordered_map<string, vector<string>> m;
    string line; getline(cin, line);
    while(n--){
        string s; int k; cin>>s>>k;
        auto& x = m[s];
        while(k--){
            string tt, ll; char c; cin>>tt;
            getline(cin, ll);
            istringstream iss(ll);
            iss>>tt;
            while(tt.back()==','){
                x.push_back(tt.substr(0,tt.size()-1));
                iss>>tt;
            }
            x.push_back(tt);
        }
    }
    // for(auto& x: m) {
    //  cout<<x.first<<"=";
    //  for(auto& y: x.second) cout<<" "<<y;cout<<endl;
    // }
    int mm=-1;
    string name;
    unordered_map<string,string> circle;
    for(auto& x: m){
        queue<pair<string,int>> q;
        unordered_map<string,string> parent;
        for(string& y: x.second) parent[y]=x.first, q.push({y,1});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            // cout<<"pp: "<<p.first<<","<<p.second<<endl;
            if(p.first==x.first){
                if(mm==-1||mm>p.second){
                    mm=p.second;
                    name=x.first;
                    circle=parent;
                    // for(auto& a: parent) cout<<a.first<<":"<<a.second<<"\n"; cout<<endl;
                }
                break;
            }
            for(auto& a: m[p.first]) {
                if(parent.find(a)==parent.end()){
                    parent[a]=p.first;
                    q.push(make_pair(a,p.second+1));
                }
            }
        }
    }
    if(mm==-1) cout<<"SHIP IT"<<endl;
    else{
        cout<<name;
        if(mm>1){ 
            stack<string> st;
            for(string s=circle[name]; s!=name; s=circle[s]){
                st.push(s);
            }
            while(!st.empty()){
                cout<<" "<<st.top();
                st.pop();
            }
        }
        cout<<endl;
    }
}