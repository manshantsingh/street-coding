#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int lg, lb;cin>>lg>>lb;
        int bg=0,tg=0,bb=0,tb=0;
        for(int i=0;i<lg;i++){
            int x;cin>>x;
            if(x>bg){
                bg=x;
                tg=1;
            }
            else if(x==bg) tg++;
        }
        for(int i=0;i<lb;i++){
            int x;cin>>x;
            if(x>bb){
                bb=x;
                tb=1;
            }
            else if(x==bg) tg++;
        }
        if(bg>bb) cout<<"Godzilla";
        else if(bg<bb) cout<<"MechaGodzilla";
        else cout<<(tg>=tb?"Godzilla":"MechaGodzilla");
        cout<<endl;
    }
    return 0;
}