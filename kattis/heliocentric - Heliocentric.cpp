#include <iostream>
using namespace std;
const int EARTH_DAYS=365;
const int MARS_DAYS=687;
int main(){
    int e,m,caseNum=0;
    while(cin>>e>>m){
        int addedDays=0;
        if(m!=0){
            int diff=MARS_DAYS-m;
            e=(e+diff)%EARTH_DAYS;
            m=0;
            addedDays+=diff;
        }
        while(e||m){
            e=(e+MARS_DAYS)%EARTH_DAYS;
            addedDays+=MARS_DAYS;
        }
        cout<<"Case "<<++caseNum<<": "<<addedDays<<endl;
    }
    return 0;
}