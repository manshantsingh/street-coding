#include <iostream>
#include <string>
#include <map>
using namespace std;
bool isSymbol(string s){
    if(s.size()>1) return false;
    char c=s[0];
    return c=='='||c=='>'||c=='<';
}
int main(){
    map<string, int> m;
    string cmd;
    while(cin>>cmd){
        if(cmd.compare("define")==0){
            int val;string name;
            cin>>val;getline(cin, name);
            m[name.substr(1)]=val;
        }
        else{
            string a, temp, b;
            cin>>a>>temp;
            while(!isSymbol(temp)){
                a+=" "+temp;
                cin>>temp;
            }
            getline(cin, b);
            b=b.substr(1);
            if(m.find(a)==m.end()||m.find(b)==m.end()){
                cout<<"undefined"<<endl;
                continue;
            }
            char c=temp[0];
            bool result;
            if(c=='=') result=m[a]==m[b];
            else if(c=='>') result=m[a]>m[b];
            else result=m[a]<m[b];
            cout<<(result?"true":"false")<<endl;
        }
    }
    return 0;
}