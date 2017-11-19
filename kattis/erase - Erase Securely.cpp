#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    if(n%2==1){
        for(unsigned int i=0;i<a.size();i++) a[i]= a[i]=='0'?'1':'0';
    }
    if(a.compare(b)==0) cout<<"Deletion succeeded"<<endl;
    else cout<<"Deletion failed"<<endl;
    return 0;
}