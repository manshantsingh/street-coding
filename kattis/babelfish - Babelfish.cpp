#include <bits/stdc++.h>
using namespace std;

int main(){
    string line;
    map<string,string> m;
    bool done=false;
    while(getline(cin, line)){
        if(!done){
            if(line.empty()){
                done=true;
                continue;
            }
            istringstream iss(line);
            string a,b; iss>>a>>b;
            m[b]=a;
        } else{
            auto it=m.find(line);
            cout<<(it==m.end()?"eh": it->second)<<endl;
        }
    }
}
