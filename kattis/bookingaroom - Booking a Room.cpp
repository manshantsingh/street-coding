#include <iostream>
using namespace std;
int main(){
    int n,r;cin>>n>>r;
    if(n>r){
        bool *arr=new bool[n+1]();
        while(r--){
            int a;cin>>a;
            arr[a]=true;
        }
        for(int i=1;i<=n;i++){
            if(!arr[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
    else cout<<"too late"<<endl;
    return 0;
}