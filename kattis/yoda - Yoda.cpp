#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int max(int a, int b){
    return a>b?a:b;
}
void print(string &s){
    if(s==""){
        cout<<"YODA"<<endl;
        return;
    }
    istringstream iss(s);
    int a;iss>>a;
    cout<<a<<endl;
}
int main(){
    string a,b;cin>>a>>b;
    int l=max(a.size(),b.size());
    for(int i=a.size();i<l;i++) a="0"+a;
    for(int i=b.size();i<l;i++) b="0"+b;
    string x="", y="";
    for(int i=0;i<l;i++){
        if(a[i]>b[i]) x+=a[i];
        else if(a[i]<b[i]) y+=b[i];
        else{
            x+=a[i];
            y+=b[i];
        }
    }
    print(x);
    print(y);
    return 0;
}