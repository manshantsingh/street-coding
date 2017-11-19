#include <iostream>
using namespace std;
int main(){
    while(true){
        int n,d;cin>>n>>d;
        if(n==0 && d==0) break;
        cout<<(n/d)<<" "<<(n%d)<<" / "<<d<<endl;
    }
    return 0;
}