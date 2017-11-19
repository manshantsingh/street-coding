#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(is_sorted(v.begin(), v.end())) cout<<"INCREASING"<<endl;
    else{
        reverse(v.begin(), v.end());
        if(is_sorted(v.begin(), v.end())) cout<<"DECREASING"<<endl;
        else cout<<"NEITHER"<<endl;
    }
    return 0;
}