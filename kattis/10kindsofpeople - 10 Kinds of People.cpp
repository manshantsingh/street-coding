#include <iostream>
#include <vector>
using namespace std;
int setNum=1;
const int dr[]={0,1,0,-1},
        dc[] = {1,0,-1,0};
void func(const vector<vector<bool>>& grid, vector<vector<int>>& dp, int i, int j){
    bool val=grid[i][j];
    for(int k=0;k<4;k++){
        int r=i+dr[k],
            c=j+dc[k];
        if(r>=0 && r<grid.size() && c>=0 && c<grid[0].size() && grid[r][c]==val && dp[r][c]==0){
            dp[r][c]=setNum;
            func(grid, dp, r, c);
        }
    }
}
int main(){
    int r,c;cin>>r>>c;
    vector<vector<bool>> grid(r, vector<bool>(c));
    for(int i=0;i<r;i++) for(int j=0;j<c;j++){
        char x;cin>>x;
        grid[i][j]=x=='1';
    }
    vector<vector<int>> dp(r, vector<int>(c, 0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(dp[i][j]==0){
                dp[i][j]=setNum;
                func(grid,dp,i,j);
                setNum++;
            }
        }
    }
    int n;cin>>n;
    while(n--){
        int r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
        r1--;r2--;c1--;c2--;
        if(dp[r1][c1]==dp[r2][c2]){
            if(grid[r1][c1]) cout<<"decimal"<<endl;
            else cout<<"binary"<<endl;
        }
        else cout<<"neither"<<endl;
    }
    return 0;
}