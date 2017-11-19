#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int n;cin>>n>>ws;
    while(n--){
        string line;getline(cin,line);
        unsigned int k=ceil(sqrt((double)line.size()));
        for(unsigned int j=0;j<k;j++){
            for(unsigned int i=k;i>0;i--){
                if((i-1)*k+j<line.size()) cout<<line[(i-1)*k+j];
            }
        }
        cout<<endl;
    }
    return 0;
}