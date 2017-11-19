#include <iostream>
using namespace std;
int main(){
    int a1,a2,a3,a4,b1,b2,b3,b4;
    cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
    int a=(b1+a1) + (b2+a2);
    int b=(b3+a3) + (b4+a4);
    if(a>b) cout<<"Gunnar";
    else if(a<b) cout<<"Emma";
    else cout<<"Tie";
    cout<<endl;
    return 0;
}