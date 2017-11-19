#include <iostream>
#include <cstdint>
using namespace std;
const int SIZE=1000001;
int main(){
    int* arr=new int[1000001];
    arr[1]=1;
    unsigned long long val=1;
    for(int i=2;i<=SIZE;i++){
        val*=i;
        while(val%10==0){
            val/=10;
        }
        val=val%10000000000;
        arr[i]=val%10;
    }
    while(true){
        int n;cin>>n;
        if(n==0) break;
        cout<<arr[n]<<endl;
    }
    delete[] arr;
    return 0;
}