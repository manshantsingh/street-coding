#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;cin>>n;
    int rootN=(int) sqrt(n);
    for(int i=2;i<=rootN;i++){
        if(n%i==0){
            cout<<(n-n/i)<<endl;
            return 0;
        }
    }
    cout<<(n-1)<<endl;
    return 0;
}