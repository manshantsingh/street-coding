#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;cin>>n;
    string line;getline(cin,line);
    while(n--){
        getline(cin,line);
        if(line.substr(0,10)=="Simon says") cout<<line.substr(10)<<endl;
    }
    return 0;
}