#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> grid;
    string line;
    while(getline(cin, line)){
        grid.push_back(line);
    }
    // for(int i=0;i<grid.size();i++){
    //  if(grid[i].size()<maxLength) cout<<"index "<<i<<": length is smaller"<<endl;//for(int i=grid[i].size();i<=maxLength;i++) grid[i]+=" ";
    // }
    int totalMoves=0;
    int width=grid[0].size();
    int height=grid.size();
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(grid[i][j]=='.'){
                if(j>1 && grid[i][j-1]=='o' && grid[i][j-2]=='o') totalMoves++;
                if(j<width-2 && grid[i][j+1]=='o' && grid[i][j+2]=='o') totalMoves++;
                if(i>1 && grid[i-1][j]=='o' && grid[i-2][j]=='o') totalMoves++;
                if(i<height-2 && grid[i+1][j]=='o' && grid[i+2][j]=='o') totalMoves++;
            }
        }
    }
    cout<<totalMoves<<endl;
    return 0;
}