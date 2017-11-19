#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<n;
        if(n<0) n*=-1;
        cout<<" is "<<(n%2==1?"odd":"even")<<endl;
    }
    return 0;
}