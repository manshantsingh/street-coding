#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int T; cin>>T;
	for(int t=1;t<=T;t++){
		int n,m; cin>>n>>m;
		vector<int> v(n, 0);
		for(int i=0;i<m;i++){
			int a,b; cin>>a>>b;
			v[a-1]++;
			v[b-1]++;
		}
		cout<<"Case "<<t<<": ";
		if(n-1==m){
			int ones=0, mm=0;
			bool valid=true, found=false;
			for(auto x: v){
				if(x<1){
					valid=false;
					break;
				}
				else if(x<=2){
					 ones++;
				}
				else{
					if(found){
						valid=false;
						break;
					}
					found=true;
					mm=x;
				}
			}
			if(found){
				if(ones==n-1){
					if(mm==3){
						cout<<"Y"<<endl;
						continue;
					}
					else if(mm==4){
						cout<<"X"<<endl;
						continue;
					}
				}
			}
			else if(ones==n){
				cout<<"I"<<endl;
				continue;
			}
		}
		cout<<"NotValid"<<endl;
	}
} 