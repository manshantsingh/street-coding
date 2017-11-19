#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int h,k;cin>>h>>k;
    while(h||k){
        int * heads=new int[h];
        int * knights=new int[k];
        for(int i=0;i<h;i++) cin>>heads[i];
        for(int i=0;i<k;i++) cin>>knights[i];
        sort(heads, heads+h);
        sort(knights, knights+k);
        int i=0,j=0,cost=0;
        bool failed=false;
        while(true){
            if(i>=h) break;
            if(j>=k) {
                failed=true;
                break;
            }
            if(heads[i]>knights[j]) j++;
            else{
                cost+=knights[j];
                i++;
                j++;
            }
        }
        if(failed) cout<<"Loowater is doomed!"<<endl;
        else cout<<cost<<endl;
        
        delete[] knights;
        delete[] heads;
        cin>>h>>k;
    }
    return 0;
}