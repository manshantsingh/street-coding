#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int> m;
    for(int i=1;i<=5;i++){
        int total=0;
        int n=4;while(n--){
            int a;cin>>a;total+=a;
        }
        m[total]=i;
    }
    auto x=m.rbegin();
    cout<<x->second<<" "<<x->first<<endl;
    return 0;
}