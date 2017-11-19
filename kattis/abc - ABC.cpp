#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[3];
    for(int i=0;i<3;i++) cin>>arr[i];
    sort(arr, arr+3);
    int i=3;
    do{
        char c;cin>>c;
        cout<<arr[(int)(c-'A')];
    }while(--i && cout<<" ");
    cout<<endl;
    return 0;
}