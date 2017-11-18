#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n,r,c;cin>>n>>r>>c;
	vector<string> grid(n);
	for(string& x: grid) cin>>x;
	int pr,pc;
	for(int i=0;i<n;i++) {
		bool done=false;
		for(int j=0;j<n;j++) {
			if(grid[i][j]=='p') {
				pr=i;
				pc=j;
				done=true;
				break;
			}
		}
		if(done) break;
	}
	if(r>pr) cout<<"UP"<<endl;
	else if(r<pr) cout<<"DOWN"<<endl;
	else if(c>pc) cout<<"LEFT"<<endl;
	else cout<<"RIGHT"<<endl;
	return 0;
}