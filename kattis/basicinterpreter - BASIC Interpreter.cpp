#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <cstdint>
using namespace std;
const int A = 'A';
const int Z = 'Z';
int32_t arr[26] = {};
int32_t value(string s){
    if(s.size()==1 && s[0]>=A && s[0]<=Z) return arr[s[0]-A];
    else return stoi(s);
}
int main(){
    ios_base::sync_with_stdio(false);
    map<int, vector<string>> m;
    int n;
    while(cin>>n>>ws){
        string line;getline(cin, line);
        istringstream iss(line);
        vector<string> v;
        string s;
        if(line.substr(0,5)=="PRINT"){
            iss>>s>>ws;
            v.push_back(s);
            getline(iss, s);
            v.push_back(s);
        }
        else while(iss>>s) v.push_back(s);
        m[n] = v;
    }
    auto it=m.begin();
    while(it!=m.end()){
        vector<string> &v=it->second;
        if(v[0]=="LET"){
            int32_t val;
            if(v.size()==4) val=value(v[3]);
            else{
                int32_t x=value(v[3]), y=value(v[5]);char op=v[4][0];
                if(op=='+') val = x+y;
                else if(op=='-') val = x-y;
                else if(op=='*') val = x*y;
                else val = x/y;
            }
            arr[v[1][0]-A]=val;
        }
        else if(v[0]=="IF"){
            int32_t x=value(v[1]), y=value(v[3]); string op=v[2];
            bool ans=false;
            if(op=="=") ans = x==y;
            else if(op==">") ans = x>y;
            else if(op=="<") ans = x<y;
            else if(op=="<>") ans = x!=y;
            else if(op=="<=") ans = x<=y;
            else ans = x>=y;
            if(ans){
                it = m.find(stoi(v[6]));
                continue;
            }
        }
        else{
            if(v[1].size()==1) cout<<arr[v[1][0]-A];
            else cout<<v[1].substr(1, v[1].size()-2);
            if(v[0]=="PRINTLN") cout<<endl;
        }
        it++;
    }
    return 0;
}