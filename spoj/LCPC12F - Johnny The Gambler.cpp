#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t; cin>>t;
    for(long long tt=1;tt<=t;tt++){
    	long long value, n; cin>>value>>n;
    	map<long long,long long> m;
    	while(n--){
    		long long x; cin>>x;
    		m[x]++;
    	}
    	long long unsigned count=0;
    	auto l=m.begin();
    	auto r=m.rbegin();
    	while(l!=m.end() && r!=m.rend() && l->first <= r->first){
    		long long x = l->first + r->first;
    		if(x==value){
 
    			if(l->first == r->first) count+= (l->second * (l->second - 1))/2;
    			else count += l->second *r->second;
    			l++;
    			r++;
    		}
    		else if(x<value) l++;
    		else r++;
    	}
    	cout<<tt<<". "<<count<<endl;
    }
} 