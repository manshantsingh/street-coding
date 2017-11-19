#include <iostream>
#include <string>
#include <set>
#include <utility>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int t;cin>>t;
    cout<<t<<endl;
    while(t--){
        string line;cin>>line;
        int dir=0;
        int mx=0,my=0,Mx=0,My=0,x=0,y=0;
        set<pair<int,int> > s;
        for(char c: line){
            if(c=='R') dir=(dir+1)%4;
            else if(c=='L') dir=(dir+3)%4;
            else if(c=='B') dir=(dir+2)%4;
            x+=dx[dir];
            y+=dy[dir];
            mx=min(mx,x);
            my=min(my,y);
            Mx=max(Mx,x);
            My=max(My,y);
            s.insert(make_pair(x,y));
        }
        my--;
        Mx++;
        My++;
        cout<<My-my+1<<" "<<Mx-mx+1<<endl;
        for(int i=my;i<=My;i++){
            for(int j=mx;j<=Mx;j++) cout<<(s.find(make_pair(j,i))==s.end()?"#":".");
            cout<<endl;
        }
    }
    return 0;
}