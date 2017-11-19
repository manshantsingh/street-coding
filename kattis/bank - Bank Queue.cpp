#include <iostream>
#include <set>
using namespace std;
int main(){
    unsigned int n,t;cin>>n>>t;
    multiset<int, greater<int>> *s = new multiset<int, greater<int>>[t];
    while(n--){
        int v, tt; cin>>v>>tt;
        s[tt].insert(v);
    }
    multiset<int> v;
    for(unsigned int i=0;i<t;i++){
        for(int x: s[i]){
            if(v.size()<=i) v.insert(x);
            else if(*v.begin()<x){
                v.erase(*v.begin());
                v.insert(x);
            }
        }
    }
    int sum=0;
    for(int x: v) sum += x;
    cout<<sum<<endl;
    delete[] s;
    return 0;
}