#include <iostream>
#include <vector>
using namespace std;
int main(){
    int grid[4][4], arr[4][4];
    for(int i=0;i<4;i++) for(int j=0;j<4;j++) cin>>grid[i][j];
    int dir;cin>>dir;
    if(dir==0) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=grid[i][j];
    else if(dir==2) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=grid[i][3-j];
    else if(dir==1) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=grid[j][i];
    else if(dir==3) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=grid[3-j][i];
    vector<int> * v=new vector<int>[4];
    for(int i=0;i<4;i++){
        int * line=arr[i];
        int currentNum; bool gotNum=false;
        for(int j=0;j<4;j++){
            if(line[j]==0) continue;
            if(gotNum){
                if(line[j]==currentNum){v[i].push_back(currentNum*2);gotNum=false;}
                else{v[i].push_back(currentNum);currentNum=line[j];}
            }
            else{currentNum=line[j];gotNum=true;}
        }
        if(gotNum) v[i].push_back(currentNum);
        for(int j=v[i].size();j<4;j++) v[i].push_back(0);
    }
    if(dir==0) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=v[i][j];
    else if(dir==2) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=v[i][3-j];
    else if(dir==1) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=v[j][i];
    else if(dir==3) for(int i=0;i<4;i++) for(int j=0;j<4;j++) arr[i][j]=v[j][3-i];
    for(int i=0;i<4;i++){
        cout<<arr[i][0];
        for(int j=1;j<4;j++) cout<<" "<<arr[i][j];
        cout<<endl;
    }
    return 0;
}