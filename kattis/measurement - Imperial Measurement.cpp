#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;
map<string,int> m;
int main(){
    m["th"]=1;
    m["in"]=1000*m["th"];
    m["ft"]=12*m["in"];
    m["yd"]=3*m["ft"];
    m["ch"]=22*m["yd"];
    m["fur"]=10*m["ch"];
    m["mi"]=8*m["fur"];
    m["lea"]=3*m["mi"];
    m["thou"]=m["th"];
    m["inch"]=m["in"];
    m["foot"]=m["ft"];
    m["feet"]=m["ft"];
    m["yard"]=m["yd"];
    m["chain"]=m["ch"];
    m["furlong"]=m["fur"];
    m["mile"]=m["mi"];
    m["league"]=m["lea"];
    int num;
    string a,b;
    cin>>num>>a>>b>>b;
    int ansInt=(num*m[a])/m[b];
    double ansDouble=(((double)num)*m[a])/m[b];
    if(ansInt==ansDouble) cout<<ansInt<<endl;
    else cout<<fixed<<setprecision(13)<<ansDouble<<endl;
    return 0;
}