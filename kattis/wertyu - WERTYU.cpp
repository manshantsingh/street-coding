#include <iostream>
#include <string>
using namespace std;
int main(){
    const string alphas="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string line;
    while(getline(cin,line)){
        for(int i=0;i<line.size();i++){
            if(line[i]==' ') cout<<" ";
            for(int j=1;j<alphas.size();j++){
                if(line[i]==alphas[j]){
                    cout<<alphas[j-1];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}