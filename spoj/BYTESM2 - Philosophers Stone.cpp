#include <iostream>
#include <vector>
 
using namespace std;
 
int rows, cols;
 
int maxinVector(const vector<int> & vec){
	int max=0;
	for(int i=0;i<vec.size();i++) if(vec[i]>max) max=vec[i];
	return max;
}
 
int main(){
	
	int t;cin>>t;
	while(t--){
		cin>>rows>>cols;
		int ** arr=new int * [rows];
		for(int i=0;i<rows;i++){
			arr[i]=new int[cols];
			for(int j=0;j<cols;j++) cin>>arr[i][j];
		}
		for(int i=rows-2;i>=0;i--){
			for(int j=0;j<cols;j++){
				vector<int> vec;
				if(j>0) vec.push_back(arr[i+1][j-1]);
				if(j<cols-1) vec.push_back(arr[i+1][j+1]);
				vec.push_back(arr[i+1][j]);
				arr[i][j]+=maxinVector(vec);
			}
		}
		int max=0;
		for(int j=0;j<cols;j++){
			if(arr[0][j]>max) max=arr[0][j];
		}
		cout<<max<<endl;
 
		for(int i=0;i<rows;i++) delete[] arr[i];
		delete[] arr;
	}
	
	return 0;
} 