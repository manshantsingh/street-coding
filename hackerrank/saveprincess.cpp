#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

typedef pair<int,int> coord_t;
		//R,D,L,U
int dr[]={0,1,0,-1},
	dc[]={1,0,-1,0};

int main(){
	int n;cin>>n;
	vector<string> grid(n);
	for(auto& x: grid) cin>>x;
	coord_t start, end;
	for(int r=0;r<n;r++){
		for(int c=0;c<n;c++){
			if(grid[r][c]=='m') start = {r,c};
			else if(grid[r][c]=='p') end = {r,c};
		}
	}
	vector<vector<int>> bfs(n, vector<int>(n, -1));
	queue<coord_t> q;
	q.push(end);
	while(!q.empty()){
		coord_t front = q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int r=front.first+dr[i],
				c=front.second+dc[i];
			if(r<0||r>=n||c<0||c>=n||bfs[r][c]!=-1) continue;
			bfs[r][c]=i;
			if(r==start.first && c==start.second) break;
			q.push({r,c});
		}
	}
	int r=start.first,
		c=start.second;
	while(r!=end.first || c!=end.second){
		switch(bfs[r][c]){
			case 0:
				cout<<"LEFT"<<endl;
				c--;
				break;
			case 1:
				cout<<"UP"<<endl;
				r--;
				break;
			case 2:
				cout<<"RIGHT"<<endl;
				c++;
				break;
			case 3:
				cout<<"DOWN"<<endl;
				r++;
				break;
		}
	}
	return 0;
}