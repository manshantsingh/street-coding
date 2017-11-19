#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    const double PI=3.14159265;
    double r,x,y;
    cout<<fixed<<setprecision(6);
    while(cin>>r>>x>>y){
        double d2=x*x+y*y;
        if(r*r<d2){
            cout<<"miss"<<endl;
            continue;
        }
        double d=sqrt(d2);
        double totalArea=PI*r*r;
        double angle=acos(d/r);
        double smallPart=r*r*angle - sqrt(r*r-d2)*d;
        cout<<(totalArea-smallPart)<<" "<<smallPart<<endl;
    }
}