#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int *arr, n;
double *length;
double func(int i, int x){
    if(i>=n) return -1.0;
    if(arr[i]>=x) return (x/2) * length[i];
    double inner = func(i+1, 2*(x-arr[i]));
    if(inner<0.0) return -1.0;
    return (x/2) * length[i] + inner;
}
int main(){
    cin>>n;
    arr=new int[n-1];
    length = new double[n-1];
    length[0] = pow(2, -3.0/4);
    length[1] = pow(2, -5.0/4);
    for(int i=2;i<n-1;i++) length[i] = length[i-2]/2;
    for(int i=0;i<n-1;i++) cin>>arr[i];
    double ans = func(0, 2);
    if(ans<0) cout<<"impossible"<<endl;
    else cout<<fixed<<setprecision(11)<<ans<<endl;
    delete[] length;
    delete[] arr;
    return 0;
}