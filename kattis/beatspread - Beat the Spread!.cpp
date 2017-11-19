#include <iostream>
#include <utility>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int sum, diff;cin>>sum>>diff;
        if(diff>sum||(sum+diff)%2==1){
            cout<<"impossible"<<endl;
            continue;
        }
        int a=(sum+diff)/2;
        int b=sum-a;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}