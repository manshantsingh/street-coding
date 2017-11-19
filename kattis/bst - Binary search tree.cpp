#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, a;cin>>n>>a;
    long long c=0;
    map<int, int> m{{a,0}};
    cout<<0<<endl;
    while(--n){
        cin>>a;
        auto it=m.insert({a,0}).first;
        if(it==m.begin()){
            it++;
            c+=it->second+1;
            m.begin()->second=it->second+1;
        }
        else if(m.rbegin()->first==a){
            it--;
            c+=it->second+1;
            m.rbegin()->second=it->second+1;
        }
        else{
            auto left=it, right=it;
            left--; right++;
            if(left->second>right->second) it->second=left->second+1;
            else it->second=right->second+1;
            c+=it->second;
        }
        cout<<c<<endl;
    }
    return 0;
}