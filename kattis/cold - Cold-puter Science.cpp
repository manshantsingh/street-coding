#include <iostream>
using namespace std;
int main(){
    int n, sum=0;
    cin>>n;
    while(n--){
        int a;cin>>a;
        if(a<0) sum++;
    }
    cout<<sum<<endl;
    return 0;
}