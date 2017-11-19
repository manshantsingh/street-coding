#include <iostream>
#include <string>
using namespace std;
int pow(int base, int exp){
    int ans=1;
    while(exp--) ans*=base;
    return ans;
}
int main(){
    int h;cin>>h;
    int rootLabel=pow(2,h+1)-1;
    string sequence;
    if(cin>>sequence){
        int index=0;
        for(unsigned int i=0;i<sequence.size();i++){
            if(sequence[i]=='L') index=2*index+1;
            else index=2*index+2;
        }
        cout<<rootLabel-index<<endl;
    }
    else cout<<rootLabel<<endl;
    return 0;
}