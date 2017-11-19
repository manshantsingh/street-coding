#include <bits/stdc++.h>
using namespace std;
int dx[]={0,-1,0,1};
int dy[]={1,0,-1,0};
int fx,fy, n;
bool hehe(const vector<string>& v){
    int x=0,y=0,d=0;
    for(auto s: v){
        if(s=="Forward"){
            x+=dx[d];
            y+=dy[d];
        }
        else if(s=="Right"){
            d=(d+3)%4;
        }
        else{
            d=(d+1)%4;
        }
    }
    return x==fx && y==fy;
}
int main(){
    cin>>fx>>fy>>n;
    vector<string> v(n);
    for(auto& x: v) cin>>x;
    auto cp=v;
    for(int i=0;i<n;i++){
        bool done=false;
        int cc=0;
        while(true){
            if(cc==0){
                v[i]="Forward";
            }
            else if(cc==1){
                v[i]="Right";
            }
            else if(cc==2){
                v[i]="Left";
            }
            else{
                v[i]=cp[i];
                break;
            }
            cc++; 
            done = hehe(v); 
            if(done) break;
        }
        if(done){
            cout<<(i+1)<<" "<<v[i]<<endl;
            break;
        }
    }
}