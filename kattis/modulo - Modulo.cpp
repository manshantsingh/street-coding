#include <iostream>
using namespace std;
int main(){
    int arr[42] = {0};
    for(int i=0;i<10;i++){
        int x;cin>>x;arr[x%42]++;
    }
    int total=0;
    for(int x: arr) if(x>0) total++;
    cout<<total<<endl;
    return 0;
}