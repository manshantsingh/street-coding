#include <iostream>
#include <string>
using namespace std;
int min(int a,int b){
    return a<b?a:b;
}
int main(){
    int diff;
    string line;
    cin>>diff>>line;
    int len=line.length();
    int currentDiff=0, i;
    for(i=0;i<len;i++){
        if(currentDiff<0){
            if(line[i]=='M') currentDiff++;
            else if(line[i+1]=='M'){
                line[i+1]='W';
                currentDiff++;
            }
            else currentDiff--;
            if(-currentDiff>diff) break;
        }
        else if(currentDiff>0){
            if(line[i]=='W') currentDiff--;
            else if(line[i+1]=='W'){
                line[i+1]='M';
                currentDiff--;
            }
            else currentDiff++;
            if(currentDiff>diff) break;
        }
        else if(line[i]=='M') currentDiff++;
        else currentDiff--;
    }
    cout<<min(i, len);
    return 0;
}