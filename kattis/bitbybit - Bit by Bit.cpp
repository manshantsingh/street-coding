#include <iostream>
#include <string>
using namespace std;
int main(){
    while(true){
        int n;cin>>n;
        if(n==0) break;
        string num="????????????????????????????????";
        while(n--){
            string cmd; int a; cin>>cmd>>a;
            if(cmd=="SET") num[a]='1';
            else if(cmd=="CLEAR") num[a]='0';
            else{
                int b; cin>>b;
                if(cmd=="AND"){
                    if(num[a]=='0'||num[b]=='0') num[a]='0';
                    else if(num[a]=='?'||num[b]=='?') num[a]='?';
                    else num[a]='1';
                } else{
                    if(num[a]=='1'||num[b]=='1') num[a]='1';
                    else if(num[a]=='?'||num[b]=='?') num[a]='?';
                    else num[a]='0';
                }
            }
        }
        for(int i=31;i>=0;i--) cout<<num[i];
        cout<<endl;
    }
    return 0;
}