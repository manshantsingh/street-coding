#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v(n);
		for(int& x: v) cin>>x;
		vector<int> f(n,1), b(n,1);
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(v[j]<v[i] && f[j]>=f[i]) f[i]=f[j]+1;
				else if(v[j]>v[i]){
					if(f[j]>=b[i]) b[i]=f[j]+1;
					if(b[j]>=b[i]) b[i]=b[j]+1;
				}
			}
		}
		cout<<*max_element(b.begin(), b.end())<<endl;
	}
	return 0;
} 