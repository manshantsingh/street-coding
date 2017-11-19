#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;cin>>n;
    int count=0;
    multiset<int> s;
    while(n--){
        int h;cin>>h;
        auto it=s.find(h);
        if(it==s.end()) count++;
        else s.erase(it);
        s.insert(h-1);
    }
    cout<<count<<endl;
    return 0;
}