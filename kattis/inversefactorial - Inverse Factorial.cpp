#include <iostream>
#include <string>
#include <bitset>
using namespace std;
typedef unsigned long long llu_t;
const llu_t MOD = 10000000000000; 
llu_t hasher(int n){
    llu_t val=1;
    for(int i=2;i<=n;i++){
        val = (val*i) % MOD;
        for(int j=i;j%5==0;j/=5) val/=10;
    }
    return val;
}
int binary_search_input(int output){
    int lo=5*output/2, hi=output*10;
    while(lo<hi){
        int mid=(lo+hi)/2;
        int total=0, tmp=mid;
        while(tmp>0){
            tmp/=5;
            total+=tmp;
        }
        if(total==output) return mid - (mid%5);
        if(total<output) lo=mid+1;
        else hi=mid-1;
    }
    return lo - (lo%5);
}
int main(){
    ios_base::sync_with_stdio(false);
    string s;cin>>s;
    if(s.size()<=7){
        int val=stoi(s);
        int temp=1, i;
        for(i=2;temp<val;i++){
            temp*=i;
        }
        cout<<(i-1)<<endl;
        return 0;
    }
    int x=s.size()-1;
    while(s[x]=='0') x--;
    int z=s.size()-1-x; //zeros
    int lo=binary_search_input(z);
    llu_t lohash=hasher(lo);
    int fachash=stoi(s.substr(x-3,4));
    while(fachash!=lohash%10000){
        lo++;
        lohash = (lohash * lo) % MOD;
        for(int j=lo;j%5==0;j/=5) lohash/=10;
    }
    cout<<lo<<endl;
    return 0;
}