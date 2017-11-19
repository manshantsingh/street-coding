#include <iostream>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, int> coord_t;
coord_t dd[8] {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
bool inRange(coord_t pos){
    return pos.first>=0 && pos.first<8 && pos.second>=0 && pos.second<8;
}
coord_t possiblePos(coord_t pos, int i){
    return {pos.first+dd[i].first, pos.second+dd[i].second};
}
void bfs(coord_t startPos){
    int arr[8][8];
    for(int i=0;i<8;i++) for(int j=0;j<8;j++) arr[i][j]=0;
    queue<coord_t> q;
    q.push(startPos);
    int maxVal=0;
    while(!q.empty()){
        coord_t pos=q.front();
        q.pop();
        int val=arr[pos.first][pos.second]+1;
        for(int i=0;i<8;i++){
            coord_t t {possiblePos(pos,i)};
            if(inRange(t) && arr[t.first][t.second]==0){
                arr[t.first][t.second]=val;
                maxVal=val;
                q.push(t);
            }
        }
    }
    cout<<maxVal;
    for(int j=7;j>=0;j--){
        for(int i=0;i<8;i++){
            if(arr[i][j]==maxVal) cout<<" "<<((char)(i+97))<<j+1;
        }
    }
    cout<<endl;
}
int main(){
    int t;cin>>t>>ws;
    while(t--){
        char c;int b;
        cin>>c>>b>>ws;
        bfs({((int)c)-97,b-1});
    }
    return 0;
}