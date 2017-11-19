#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <map>
using namespace std;
int main(){
    int n;cin>>n;
    while(n){
        map<string, set<string> > m;
        while(n--){
            string name;cin>>name;
            string things;getline(cin, things);
            istringstream iss(things);
            string t;
            while(iss>>t){
                m[t].insert(name);
            }
        }
        for(auto x: m){
            cout<<x.first;
            for(string s: x.second) cout<<" "<<s;
            cout<<endl;
        }
        cout<<endl;
        cin>>n;
    }
    return 0;
}