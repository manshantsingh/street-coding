#include <bits/stdc++.h>
using namespace std;

int main(){
	const int SIZE=10010;
    int arr[SIZE]={0,1,1,2,2,1};
    for(int i=6;i<SIZE;i++){
    	arr[i]=1+min(arr[i-1],min(arr[i-2],arr[i-5]));
    }
    int t;cin>>t;
    while(t--){
    	int n;cin>>n;
    	vector<int> v(n);
    	for(int& x: v) cin>>x;
    	int m=*min_element(v.begin(), v.end());
    	int mm=-1;
    	for(int i=0;i<=5;i++){
    		int total=0;
	    	for(int x: v) total+=arr[x-m+i];
	    	if(mm==-1||total<mm) mm=total;
    	}
    	cout<<mm<<endl;
    }
}