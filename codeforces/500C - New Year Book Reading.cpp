#include <iostream>
#include <vector>
#include <set>
#include <list>

using namespace std;

int main(){
	int n,m;cin>>n>>m;
	vector<int> w(n+1);
	for(int i=1;i<=n;i++) cin>>w[i];
	vector<int> mm(m);
	for(int i=0;i<m;i++) cin>>mm[i];
	set<int> s;
	list<int> v;
	for(int a: mm){
		if(s.insert(a).second) v.push_back(a);
	}
	int total=0;
	for(int a: mm){
		for(auto it=v.begin();it!=v.end();it++){
			if(*it==a){
				v.erase(it);
				break;
			}
			else total+=w[*it];
		}
		v.push_front(a);
	}
	cout<<total<<endl;
	return 0;
}