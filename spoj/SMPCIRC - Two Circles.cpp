#include <iostream>
#include <cmath>
 
using namespace std;
 
bool internallyTangent(int* arr){
	int dx=arr[0]-arr[3];
	int dy=arr[1]-arr[4];
	double mag=sqrt(dx*dx + dy*dy);
	return fmin(arr[2],arr[5])+mag!=fmax(arr[2],arr[5]);
}
 
bool inside(int* arr){
	int dx=arr[0]-arr[3];
	int dy=arr[1]-arr[4];
	double mag=sqrt(dx*dx + dy*dy);
	return fmin(arr[2],arr[5])+mag<fmax(arr[2],arr[5]);
}
 
int main(){
 
	int t;cin>>t;
	while(t--){
		int inputs[6];
		for(int& x:inputs) cin>>x;
 
		if(inside(inputs)) cout<<"I";
		else if(internallyTangent(inputs)) cout<<"O";
		else cout<<"E";
 
		cout<<endl;
	}
 
 
	return 0;
} 