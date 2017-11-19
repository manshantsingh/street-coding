#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int d,m;
        cin>>d>>m;
        int * month=new int[m];
        for(int i=0;i<m;i++) cin>>month[i];
        int offset=0, total=0;
        for(int i=0;i<m;i++){
            if(month[i]>=13 && (12+offset)%7==5) total++;
            offset=(offset+month[i])%7;
        }
        cout<<total<<endl;
    }
    return 0;
}