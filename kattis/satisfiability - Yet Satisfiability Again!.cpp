#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
void func(){
    int n,m;cin>>n>>m>>ws;
    vector<vector<int>> v(m);
    for(int i=0;i<m;i++){
        string line;getline(cin,line);
        istringstream iss(line);
        string s;iss>>s;
        do{
            if(s[0]=='~') v[i].push_back(stoi(s.substr(2))*-1);
            else v[i].push_back(stoi(s.substr(1)));
        }while(iss>>s>>s);
    }
    for(int num=(1<<n)-1;num>=0;num--){
        if(all_of(v.begin(), v.end(), [num](vector<int>& x){
            return any_of(x.begin(), x.end(), [num](int i){
                if(i>0) return (num & (1<<(i-1))) != 0;
                else return (num & (1<<(-i-1))) == 0;
            });
        })){
            cout<<"satisfiable"<<endl;
            return;
        }
    }
    cout<<"unsatisfiable"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        func();
    }
    return 0;
}