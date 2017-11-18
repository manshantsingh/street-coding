#include <iostream>
#include <vector>
#include <map>
#include <set>
 
using namespace std;
 
 
int main(){
	int n;cin>>n;
	map<int,vector<int>> m;
	while(n--){
		int ff,nn;cin>>ff>>nn;
		m[ff]=vector<int>(nn);
		for(auto& x:m[ff]) cin>>x;
	}
	set<int> s;
	for(auto& x: m){
		for(auto y: x.second){
			if(m.find(y)==m.end()) s.insert(y);
		}
	}
	cout<<s.size()<<endl;
	return 0;
} 