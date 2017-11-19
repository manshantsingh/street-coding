#include <iostream>
using namespace std;
int func(int a){
    for(int i=1;i<8;i++){
        bool last = a & (1 << (i-1));
        if(last) a ^= (1<<i);
    }
    return a;
}
int main(){
    int n,a;
    cin>>n>>a;
    cout<<func(a);
    while(--n){
        cin>>a;
        cout<<" "<<func(a);
    }
    cout<<endl;
    return 0;
}