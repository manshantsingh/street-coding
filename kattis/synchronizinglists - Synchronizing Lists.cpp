#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0) return 0;
    while(true){
        int * a=new int[n], * ac=new int[n], * bc=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>bc[i];
        for(int i=0;i<n;i++) ac[i]=a[i];
        sort(ac,ac+n);
        sort(bc,bc+n);
        map<int,int> m;
        for(int i=0;i<n;i++) m[ac[i]]=bc[i];
        for(int i=0;i<n;i++) cout<<m[a[i]]<<endl;
        cin>>n;
        if(n==0) break;
        cout<<endl;
    }
    return 0;
}