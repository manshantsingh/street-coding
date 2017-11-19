#include <iostream>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
void findStart(char ** arr, int& x, int& y, int& dir, int r, int c){
    for(int i=0;i<c;i++){
        if(arr[0][i]=='*'){
            x=i;
            y=0;
            dir=3;
            return;
        }
    }
    for(int i=0;i<c;i++){
        if(arr[r-1][i]=='*'){
            x=i;
            y=r-1;
            dir=1;
            return;
        }
    }
    for(int i=0;i<r;i++){
        if(arr[i][0]=='*'){
            x=0;
            y=i;
            dir=0;
            return;
        }
    }
    for(int i=0;i<r;i++){
        if(arr[i][c-1]=='*'){
            x=c-1;
            y=i;
            dir=2;
            return;
        }
    }
}
int normalSlash(int dir){
    if(dir==0) return 1;
    if(dir==1) return 0;
    if(dir==2) return 3;
    return 2;
}
int backSlash(int dir){
    if(dir==0) return 3;
    if(dir==3) return 0;
    if(dir==2) return 1;
    return 2;
}
int main(){
    int r,c, count=0;
    cin>>c>>r;
    while(r||c){
        char ** arr=new char*[r];
        for(int i=0;i<r;i++){
            arr[i]=new char[c];
            for(int j=0;j<c;j++) cin>>arr[i][j];
        }
        int x,y,dir;
        findStart(arr,x,y,dir,r,c);
        while(true){
            x+=dx[dir];
            y+=dy[dir];
            char ch=arr[y][x];
            if(ch=='x') break;
            else if(ch=='/') dir=normalSlash(dir);
            else if(ch=='\\') dir=backSlash(dir);
        }
        arr[y][x]='&';
        cout<<"HOUSE "<<++count<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++) cout<<arr[i][j];
            cout<<endl;
            delete[] arr[i];
        }
        delete[] arr;
        cin>>c>>r;
    }
    return 0;
}