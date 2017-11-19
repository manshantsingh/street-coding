#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    while(cin>>n){
        stack<int> s;queue<int> q;priority_queue<int> p;
        bool bs=true,bq=true,bp=true;
        while(n--){
            int x,y;cin>>x>>y;
            if(x==1){
                if(bs) s.push(y);
                if(bq) q.push(y);
                if(bp) p.push(y);
            }
            else{
                if(bs && !s.empty() && s.top()==y) s.pop();
                else bs=false;
                if(bq && !q.empty() && q.front()==y) q.pop();
                else bq=false;
                if(bp && !p.empty() && p.top()==y) p.pop();
                else bp=false;
            }
        }
        int count=(bs?1:0)+(bq?1:0)+(bp?1:0);
        if(count==0) cout<<"impossible"<<endl;
        else if(count>1) cout<<"not sure"<<endl;
        else{
            if(bs) cout<<"stack"<<endl;
            else if(bq) cout<<"queue"<<endl;
            else cout<<"priority queue"<<endl;
        }
    }
    return 0;
}