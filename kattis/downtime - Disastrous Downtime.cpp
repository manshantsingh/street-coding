#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int n,k;cin>>n>>k;
    while(n--){
        int a;cin>>a;
        q.push(a);
        if(a-q.front()>=1000) q.pop();
    }
    cout<<(q.size()/k+(q.size()%k==0?0:1))<<endl;
    return 0;
}