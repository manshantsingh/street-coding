#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string line;
        cin>>line;
        int s=(int)sqrt(line.size());
        for(int i=line.size()-1;i>=0;i--) cout<<line[s*(s-1-(i%s))+i/s];
        cout<<endl;
    }
    return 0;
}