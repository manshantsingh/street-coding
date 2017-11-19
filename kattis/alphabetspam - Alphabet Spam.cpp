#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    string str;cin>>str;
    int w=0,l=0,u=0,s=0;
    for(unsigned int i=0;i<str.length();i++){
        char c=str[i];
        if(c=='_') w++;
        else if(c>='a' && c<='z') l++;
        else if(c>='A' && c<='Z') u++;
        else s++;
    }
    double length=(double) str.length();
    cout<<fixed<<setprecision(15)
        <<w/length<<endl
        <<l/length<<endl
        <<u/length<<endl
        <<s/length<<endl;
    return 0;
}