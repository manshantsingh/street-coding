#include <iostream>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <sstream>
#include <utility>
using namespace std;
int main(){
    int n;cin>>n;
    map<string, pair<string,set<string>>> m;
    while(n--){
        string a,line,b;
        cin>>a;getline(cin,line);
        istringstream iss(line);
        while(iss>>b){
            m[a].second.insert(b);
            m[b].second.insert(a);
        }
    }
    string start, end;cin>>start>>end;
    queue<string> q;
    q.push(end);
    while(!q.empty()){
        string top=q.front();
        q.pop();
        auto it=m.find(top);
        if(it==m.end()) continue;
        for(string s: it->second.second){
            if(s==start){
                cout<<start;
                while(it->first != end){
                    cout<<" "<<it->first;
                    it=m.find(it->second.first);
                }
                cout<<" "<<end<<endl;
                return 0;
            }
            auto x = m.find(s);
            if(x->second.first.size()>0) continue;
            x->second.first = top;
            q.push(s);
        }
    }
    cout<<"no route found"<<endl;
    return 0;
}