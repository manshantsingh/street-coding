#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long numFiles;
    int bits;
    cin>>numFiles>>bits;
    long long maxAllowed=pow(2,bits+1)-1;
    if(numFiles>maxAllowed) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    return 0;
}