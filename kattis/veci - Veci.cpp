#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<int> hehe;
    while(num/10){
        hehe.push_back(num%10);
        num/=10;
    }
    hehe.push_back(num);
    reverse(hehe.begin(),hehe.end());
    if(next_permutation(hehe.begin(),hehe.end())){
        for(int i=0;i<hehe.size();i++) cout<<hehe[i];
        cout<<endl;
    }
    else cout<<0<<endl;
    return 0;
}