#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
struct Box{
	int x1;
	int y1;
	int x2;
	int y2;
	Box(int a,int b,int c,int d){
		x1=a;
		y1=b;
		x2=c;
		y2=d;
	};
};
 
int main(){
	
	int t;cin>>t;while(t--){
		vector<Box> boxes;
		int n;cin>>n;while(n--){
			char c;cin>>c;
			if(c=='p'){
				int x,y;cin>>x>>y;
				boxes.push_back(Box(x,y,x,y));
			}
			else if(c=='c'){
				int x,y,r;cin>>x>>y>>r;
				boxes.push_back(Box(x-r,y-r,x+r,y+r));
			}
			else if(c=='l'){
				int x,y,a,b;cin>>x>>y>>a>>b;
				boxes.push_back(Box(x,y,a,b));
			}
		}
		int x1,x2,y1,y2;
		x1=boxes[0].x1;
		y1=boxes[0].y1;
		x2=boxes[0].x2;
		y2=boxes[0].y2;
		for(int i=1;i<boxes.size();i++){
			x1=min(x1,boxes[i].x1);
			y1=min(y1,boxes[i].y1);
			x2=max(x2,boxes[i].x2);
			y2=max(y2,boxes[i].y2);
		}
		cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
		if(t) cout<<endl<<endl;
	}
 
	return 0;
} 