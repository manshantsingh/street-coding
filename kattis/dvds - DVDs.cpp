#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int currentPos=1, outOfOrder=0;
        while(n--){
            int a;cin>>a;
            if(a==currentPos) currentPos++;
            else outOfOrder++;
        }
        cout<<outOfOrder<<endl;
    }
    return 0;
}