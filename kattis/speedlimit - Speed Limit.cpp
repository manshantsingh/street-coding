#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=-1){
        int total=0;
        int lastB=0;
        while(n--){
            int a,b;cin>>a>>b;
            total+=a*(b-lastB);
            lastB=b;
        }
        cout<<total<<" miles"<<endl;
        cin>>n;
    }
    return 0;
}