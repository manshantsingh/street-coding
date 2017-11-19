#include <iostream>
#include <cmath>
using namespace std;
int histogram(int * arr, int n){
    int t=0,x=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            t+=abs(i-x);
            x++;
        }
    }
    return t;
}
int main(){
    int n;cin>>n;
    int * row=new int[n]();
    int * col=new int[n]();
    for(int i=0;i<n;i++){
        int r,c;
        cin>>c>>r;
        row[r-1]++;
        col[c-1]++;
    }
    cout<<histogram(row,n)+histogram(col,n)<<endl;
    return 0;
}