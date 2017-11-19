#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int n;cin>>n;
    set<string> s;
    while(n--){
        string cmd, name;
        cin>>cmd>>name;
        if(cmd.compare("entry")==0){
            cout<<name<<" entered";
            if(s.find(name)!=s.end()) cout<<" (ANOMALY)";
            else s.insert(name);
        }
        else{
            cout<<name<<" exited";
            if(s.find(name)==s.end()) cout<<" (ANOMALY)";
            else s.erase(name);
        }
        cout<<endl;
    }
    return 0;
}