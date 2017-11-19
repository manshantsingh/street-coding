#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> allowed;
    set<int> notAllowed;
    
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(notAllowed.find(a)!=notAllowed.end()) continue;
        if(allowed.find(a)==allowed.end()) allowed[a]=i;
        else{
            notAllowed.insert(a);
            allowed.erase(allowed.find(a));
        } 
    }
    
    if(allowed.empty()) cout<<"none"<<endl;
    else cout<<allowed.rbegin()->second<<endl;
    return 0;
}