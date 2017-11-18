#include <bits/stdc++.h>
using namespace std;

bool match(pair<int,int> a, pair<int,int> b){
    return (a.first==1&&a.second==1)||(b.first-a.first==1&&b.second==1);
}

int main(){
    string s; cin>>s;
    unordered_map<char,int> cc;
    for(char c: s) cc[c]++;
    map<int,int> m;
    for(auto& x: cc) m[x.second]++;
    if(m.size()==1 || (m.size()==2 && match(*m.begin(),*m.rbegin()))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}