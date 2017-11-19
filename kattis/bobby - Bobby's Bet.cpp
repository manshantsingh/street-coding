#include <iostream>
#include <cmath>
using namespace std;
int ncr(int n, int r){
    if(r==0||n==r) return 1;
    if(r==1||n==r+1) return n;
    return ncr(n-1,r) + ncr(n-1, r-1);
}
int main(){
    int n;cin>>n;
    while(n--){
        int r,s,x,y,w;
        cin>>r>>s>>x>>y>>w;
        double p=(s-r+1)/((double)s);
        double sum=0;
        for(int i=x;i<=y;i++){
            sum += ncr(y,i)*pow(p,i)*pow(1-p,y-i);
        }
        cout<<(sum*w>1 ? "yes" : "no")<<endl;
    }
    return 0;
}