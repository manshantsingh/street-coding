#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int numCompleted=0;
    int sum=0;
    int * arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>t) break;
        else numCompleted++;
    }
    cout<<numCompleted<<endl;
    return 0;
}