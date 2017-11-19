#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int days=0,sum=0;
    for(int i=n-1;i>=0;i--){
        sum=max(sum, ++days+arr[i]);
    }
    cout<<sum+1<<endl;
    return 0;
}