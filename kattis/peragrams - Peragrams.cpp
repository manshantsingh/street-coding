#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    string line;
    cin>>line;
    map<char, int> m;
    for(unsigned int i=0;i<line.size();i++) m[line[i]]++;
    int oddNums=0;
    for(map<char,int>::iterator it=m.begin();it!=m.end();it++){
        if(it->second%2==1) oddNums++;
    }
    if(oddNums<2) cout<<0<<endl;
    else cout<<oddNums-1<<endl;
    return 0;
}