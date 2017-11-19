#include <iostream>
using namespace std;
int getNum(const string& s){
    if(s == "**** ** ** ****") return 0;
    if(s == "  *  *  *  *  *") return 1;
    if(s == "***  *****  ***") return 2;
    if(s == "***  ****  ****") return 3;
    if(s == "* ** ****  *  *") return 4;
    if(s == "****  ***  ****") return 5;
    if(s == "****  **** ****") return 6;
    if(s == "***  *  *  *  *") return 7;
    if(s == "**** ***** ****") return 8;
    if(s == "**** ****  ****") return 9;
    return -1;
}
int main(){
    string *grid = new string[5];
    for(int i=0;i<5;i++) getline(cin, grid[i]);
    int n = (grid[0].length()+1)/4;
    int num = 0;
    bool boom=false;
    for(int i=0;i<n;i++){
        string s="";
        for(int j=0;j<5;j++){
            s += grid[j].substr(4*i,3);
        }
        int val = getNum(s);
        if(val == -1){
            boom=true;
            break;
        }
        num = num*10 + val;
    }
    cout<<((boom || num%6)?"BOOM!!":"BEER!!")<<endl;
    return 0;
}
// **** ** ** ****
//   *  *  *  *  *
// ***  *****  ***
// ***  ****  ****
// * ** ****  *  *
// ****  ***  ****
// ****  **** ****
// ***  *  *  *  *
// **** ***** ****
// **** ****  ****