#include <iostream>
#include <string>
#include <map>
using namespace std;
int min(int a, int b){
    return a<b?a:b;
}
int main(){
    map<string, int> md, mk;
    int t;cin>>t;
    for(int i=0;i<t;i++){
        string a;cin>>a;
        md[a]++;
    }
    for(int i=0;i<t;i++){
        string a;cin>>a;
        mk[a]++;
    }
    int sum=0;
    for(auto m:md){
        sum+=min(m.second, mk[m.first]);
    }
    cout<<sum<<endl;
    return 0;
}