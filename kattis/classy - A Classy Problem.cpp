#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;
struct cmp{
    bool operator()(const pair<string,string>& l, const pair<string,string>& r){
        if(l.first==r.first) return l.second<r.second;
        return l.first>r.first;
    }
};
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n>>ws;
        set<pair<string,string>,cmp> s;
        while(n--){
            string a,b,c;cin>>a>>b>>c;
            istringstream iss(b);
            ostringstream oss;
            while(getline(iss, c,'-')){
                oss<<c[0];
            }
            c=oss.str();
            reverse(c.begin(), c.end());
            for(int i=c.size();i<10;i++) c+='m';
            s.insert({c,a.substr(0,a.size()-1)});
        }
        for(const auto& x: s) cout<<x.second<<endl;
        cout<<"=============================="<<endl;
    }
    return 0;
}