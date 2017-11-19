#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        multiset<string> s;
        while(n--){
            string a;cin>>a;
            s.insert(a);
        }
        auto it=s.begin();
        auto it2=it;it2++;
        bool failed=false;
        while(it2!=s.end()){
            if(it->size()<=it2->size() && it2->substr(0,it->size())==*it){
                failed=true;
                break;
            }
            it=it2;
            it2++;
        }
        if(failed) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}