#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
int main(){
    map<string, int> wn;
    map<int, string> nw;
    string line;
    while(getline(cin, line)){
        if(line.size()<1) continue;
        istringstream iss(line);
        vector<string> words;
        string s;iss>>s;
        if(s=="clear"){
            wn.clear();
            nw.clear();
        }
        else if(s=="def"){
            int val;iss>>s>>val;
            auto it = wn.find(s);
            if(it!=wn.end()) nw.erase(it->second);
            wn[s]=val;
            nw[val]=s;
        }
        else{
            iss>>s;
            auto it = wn.find(s);
            if(it==wn.end()){
                cout<<line.substr(5)<<" unknown"<<endl;
                continue;
            }
            string name="unknown";
            bool unknown=false;
            int val = it->second;
            string op;
            while(iss>>op>>s){
                if(wn.find(s)==wn.end()){
                    unknown=true;
                    break;
                }
                if(op=="+") val += wn[s];
                else val -= wn[s];
            }
            if(!unknown){
                auto it2 = nw.find(val);
                if(it2!=nw.end()) name = it2->second;
            }
            cout<<line.substr(5)<<" "<<name<<endl;
        }
    }
    return 0;
}