#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <utility>
#include <unordered_set>
#include <set>
using namespace std;
struct cmp{
    bool operator()(const pair<int,string>& l, const pair<int,string>& r){
        if(l.first==r.first) return l.second<r.second;
        else return l.first>r.first;
    }
};
int main(){
    int n;cin>>n;
    map<string,pair<int,unordered_set<string>>> m;
    unordered_set<string> people;
    while(n--){
        string name, line;
        cin>>name;getline(cin, line);
        people.insert(name);
        istringstream iss(line);
        string word;
        while(iss>>word){
            auto& x=m[word];
            x.first++;
            x.second.insert(name);
        }
    }
    multiset<pair<int,string>,cmp> s;
    for(auto& x: m){
        if(x.second.second.size()==people.size()){
            s.insert({x.second.first,x.first});
        }
    }
    if(s.empty()){
        cout<<"ALL CLEAR"<<endl;
        return 0;
    }
    for(auto& x: s){
        cout<<x.second<<endl;
    }
    return 0;
}