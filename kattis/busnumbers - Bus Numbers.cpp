#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    int n;cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    vector<int> v{arr[0]};
    ostringstream oss;
    for(int i=1;i<n;i++){
        if(v.empty() || v.back()+1==arr[i]) v.push_back(arr[i]);
        else{
            if(v.size()>2) oss<<" "<<v.front()<<"-"<<v.back();
            else if(v.size()==2) oss<<" "<<v.front()<<" "<<v.back();
            else oss<<" "<<v.front();
            v.clear();
            v.push_back(arr[i]);
        }
    }
    if(v.size()>2) oss<<" "<<v.front()<<"-"<<v.back();
    else if(v.size()==2) oss<<" "<<v.front()<<" "<<v.back();
    else oss<<" "<<v.front();
    cout<<oss.str().substr(1)<<endl;
    return 0;
}