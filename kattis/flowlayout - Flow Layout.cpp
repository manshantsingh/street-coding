#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    while(n!=0){
        int w,mw=0,mh=0,currentW=0,currentH=0,x,y;
        cin>>x>>y;
        while(x!=-1 && y!=-1){
            int resultant=x+currentW;
            if(resultant>n){
                currentW=x;
                currentH=mh;
                mh+=y;
                mw=max(x,mw);
            }
            else{
                mw=max(resultant,mw);
                mh=max(currentH+y,mh);
                currentW=resultant;
            }
            cin>>x>>y;
        }
        cout<<mw<<" x "<<mh<<endl;
        cin>>n;
    }
    return 0;
}