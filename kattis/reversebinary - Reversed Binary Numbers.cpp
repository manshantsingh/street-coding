#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    unsigned int n;cin>>n;
    vector<bool> v;
    while(n){
        v.push_back(n%2==1);
        n>>=1;
    }
    reverse(v.begin(), v.end());
    for(unsigned int i=0;i<v.size();i++){
        n+= (1<<i)*v[i];
    }
    cout<<n<<endl;
    return 0;
}