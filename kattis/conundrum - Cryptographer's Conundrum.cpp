#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.length();i++){
        if((i%3==0 && str[i]!='P')||
            (i%3==1 && str[i]!='E')||
            (i%3==2 && str[i]!='R')) count++;
    }
    cout<<count<<endl;
    return 0;
}