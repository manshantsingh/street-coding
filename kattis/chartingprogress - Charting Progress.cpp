#include <iostream>
#include <string>
using namespace std;
int main(){
    int count=0;
    string line;
    while(getline(cin,line)){
        if(line.size()<1){
            count=0;
        }
        else{
            int stars=0;
            for(char c: line){
                if(c=='*') stars++;
            }
            string out(line.size(),'.');
            while(stars--){
                out[out.size()-(++count)]='*';
            }
            cout<<out;
        }
        cout<<endl;
    }
    return 0;
}