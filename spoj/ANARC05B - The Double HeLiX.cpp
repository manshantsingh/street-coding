#include <iostream>
#include <utility>
#include <vector>
 
using namespace std;
 
int max(int a, int b){
	return a>b?a:b;
}
 
int main(){
	int numA;
	cin>>numA;
	while(numA){
		int * arrA=new int[numA];
		for(int i=0;i<numA;i++) cin>>arrA[i];
		int numB;
		cin>>numB;
		int * arrB=new int[numB];
		for(int i=0;i<numB;i++) cin>>arrB[i];
 
		vector<pair<int,int> > commons;
 
		int a=0,b=0;
		while(a<numA && b<numB){
			if(arrA[a]<arrB[b]) a++;
			else if(arrA[a]>arrB[b]) b++;
			else{
				commons.push_back(make_pair(a,b));
				a++;
				b++;
			}
		}
		commons.push_back(make_pair(numA,numB));
		int size=commons.size();
		int * dp=new int[size];
		int startA=0,startB=0;
		for(int x=0;x<size;x++){
			int a=0,b=0;
			for(int i=startA;i<commons[x].first;i++){
				a+=arrA[i];
			}
			for(int i=startB;i<commons[x].second;i++){
				b+=arrB[i];
			}
			dp[x]=max(a,b);
 
			startA=commons[x].first;
			startB=commons[x].second;
		}
		int ans=0;
		for(int i=0;i<size;i++) ans+=dp[i];
		cout<<ans<<endl;
 
		cin>>numA;
	}
	return 0;
} 