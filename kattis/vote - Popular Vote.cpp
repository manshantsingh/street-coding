#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,vector<int> > m;
        int sum=0;
        for(int i=1;i<=n;i++){
            int a;cin>>a;
            sum+=a;
            if(m.find(a)==m.end()){
                vector<int> v;
                m[a]=v;
            }
            m[a].push_back(i);
        }
        if(m.rbegin()->second.size()>1){
            cout<<"no winner"<<endl;
            continue;
        }
        
        if(m.rbegin()->first*2<=sum) cout<<"minority winner ";
        else cout<<"majority winner ";
        cout<<m.rbegin()->second[0]<<endl;
    }
    return 0;
}