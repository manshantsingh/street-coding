#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
	int n,t;cin>>n>>t;
	vector<int> v(n+1);
	for(int i=1;i<n;i++) cin>>v[i];
	set<int> s;
	int i=1;
	while(s.insert(i).second) {
		i +=v[i];
		if(i==t){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}