#include <iostream>
using namespace std;
int main(){
    int diff[6]={1,1,2,2,2,8};
    int i=0;
    do{
        int x;cin>>x;
        cout<<(diff[i]-x);
    }while(++i<6 && cout<<" ");
    cout<<endl;
    return 0;
}