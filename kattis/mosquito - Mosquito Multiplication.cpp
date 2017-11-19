#include <iostream>
using namespace std;
int main(){
    int m,p,l,e,r,s,n;
    while(cin>>m>>p>>l>>e>>r>>s>>n){
        while(n--){
            int numEggs=m*e;
            m=p/s;
            p=l/r;
            l=numEggs;
        }
        cout<<m<<endl;
    }
    return 0;
}