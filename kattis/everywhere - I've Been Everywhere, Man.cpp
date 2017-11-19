#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<string> s;
        while(n--){
            string a;cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}