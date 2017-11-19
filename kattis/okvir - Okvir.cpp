#include <iostream>
using namespace std;
int main(){
    int m,n,u,l,rr,d;
    cin>>m>>n>>u>>l>>rr>>d;
    int r=m+u+d,c=n+l+rr;
    char** arr=new char*[r];
    for(int i=0;i<r;i++) arr[i]=new char[c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) arr[i][j]=(i+j)%2==0?'#':'.';
    }
    for(int i=u;i<u+m;i++){
        for(int j=l;j<l+n;j++) cin>>arr[i][j];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout<<arr[i][j];
        cout<<endl;
    }
}