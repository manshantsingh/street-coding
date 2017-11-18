#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
 
using namespace std;
 
template <typename T>
string to_string(T value){
	ostringstream os;
	os<<value;
	return os.str();
}
 
int to_int(string str){
	istringstream is(str);
	int ans;
	is>>ans;
	return ans;
}
 
string invertedbinary(int integer);
int invertedInt( string str);
 
int main(){
 
	int t;cin>>t;
	while(t-->0){
		vector<string> inputs;
		vector<int> indexes;
		int n;cin>>n;
		while(n-->0){
			string a;cin>>a;
			inputs.push_back(a);
		}
		string bigstring;cin>>bigstring;
 
		for(string x : inputs){
			string ans="";
			for(int i=0;i<6;i++) ans+=invertedbinary(((int) x[i]))[i];
 
			indexes.push_back(invertedInt(ans));
 
			ans="";
			for(int i=0;i<6;i++){
				int n=(i+3)%6;
				ans+=invertedbinary(((int) x[i]))[n];
			}
 
			indexes.push_back(invertedInt(ans));
		}
 
		string code="";
		for(int x : indexes) code+=to_string(bigstring[x]);
 
		cout<<code<<endl;
	}
 
	return 0;
}
 
 
 
 
 
 
 
 
 
 
string invertedbinary(int integer){
	string result="";
 
	while(integer>0){
		result+=to_string(integer%2);
		integer/=2;
	}
 
	return result;
}
 
int invertedInt( string str){
	int ans=0;
 
	for(int i=0;i<str.size();i++) ans+=to_int(to_string(str[i]))*pow(2,i);
 
	return ans;
} 
