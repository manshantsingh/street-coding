#include <iostream>
#include <string>
using namespace std;
int main(){
    string name, whichM;
    int caseNum=1;
    while(cin>>name){
        cin>>whichM;
        cout<<"Case "<<caseNum<<": ";
        if(name.size()<2) cout<<"UNIQUE"<<endl;
        else{
            char first=name[0];
            if(name[1]=='b'){
                first--;
                if(first<'A') first='G';
                cout<<first<<"# ";
            }
            else{
                first++;
                if(first>'G') first='A';
                cout<<first<<"b ";
            }
            cout<<whichM<<endl;
        }
        caseNum++;
    }
    return 0;
}