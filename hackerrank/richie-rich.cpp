#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; string s;
    cin>>n>>k>>s;

    unordered_set<int> wrong;
    for(int l=0,r=n-1; l<r; l++,r--){
    	if(s[l]!=s[r]) {
    		wrong.insert(l);
    	}
    }
    if(k<wrong.size()) {
    	cout<<-1<<endl;
    	return 0;
    }
    for(int l=0,r=n-1; l<r; l++,r--){
    	int extra=k-wrong.size();
    	char mm = (char)max(s[l],s[r]);
    	if(extra>0){
    		if(mm!='9' && (extra>1||wrong.find(l)!=wrong.end())){
    			s[l]='9';
    			s[r]='9';
    			k-=2;
    		}
    		else if(wrong.find(l)!=wrong.end()){
    			s[l]=mm;
    			s[r]=mm;
    			k--;
    		}
    	}
    	else{
    		s[l]=mm;
    		s[r]=mm;
    		k--;
    	}
    	wrong.erase(l);
    }
    if(n%2==1 && k>0){
    	s[n/2]='9';
    }
    cout<<s<<endl;
}
