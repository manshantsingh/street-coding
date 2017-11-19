#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string cmd;
        int len;
        char c;
        list<int> l;
        cin>>cmd>>len>>c;
        for(int i=1;i<len;i++){
            int a;
            cin>>a>>c;
            l.push_back(a);
        }
        if(len>0){
            int a;
            cin>>a;
            l.push_back(a);
        }
        cin>>c;
        bool reversed=false, error=false;
        for(int i=0;i<cmd.size();i++){
            if(cmd[i]=='R') reversed=!reversed;
            else{
                len--;
                if(len<0) {
                    error=true;
                    cout<<"error"<<endl;
                    break;
                }
                if(reversed) l.pop_back();
                else l.pop_front();
            }
        }
        if(error) continue;
        if(len==0){
            cout<<"[]"<<endl;
            continue;
        }
        cout<<"[";
        if(reversed){
            list<int>::reverse_iterator it=l.rbegin();
            cout<<*it;
            for(it++;it!=l.rend();it++){
                cout<<","<<*it;
            }
        }
        else{
            list<int>::iterator it=l.begin();
            cout<<*it;
            for(it++;it!=l.end();it++){
                cout<<","<<*it;
            }
        }
        cout<<"]"<<endl;
    }
    return 0;
}