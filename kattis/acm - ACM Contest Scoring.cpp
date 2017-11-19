#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;
int main(){
    map<char,int> current;
    set<char> done;
    int n;char c;string str;
    int total=0;
    while(true){
        cin>>n;
        if(n==-1) break;
        cin>>c>>str;
        if(done.find(c)!=done.end()) continue;
        if(str=="wrong") current[c]++;
        else{
            total+=20*current[c]+n;
            done.insert(c);
        }
    }
    cout<<done.size()<<" "<<total<<endl;
    return 0;
}