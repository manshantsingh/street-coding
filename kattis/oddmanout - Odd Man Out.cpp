#include <iostream>
#include <set>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;
        set<int> s;
        while(n--){
            int a;cin>>a;
            if(s.find(a)==s.end()) s.insert(a);
            else s.erase(a);
        }
        cout<<"Case #"<<i<<": "<<*s.begin()<<endl;
    }
    return 0;
}