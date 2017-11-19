#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    const double PI=atan(1)*4;
    cout<<setprecision(9);
    double radius;
    int total, inside;
    cin>>radius>>total>>inside;
    while(!(radius==0 && total==0 && inside==0)){
        
        double totalArea=4*radius*radius;
        double realArea=PI*radius*radius;
        double calculatedArea=inside*totalArea/total;
        cout<<realArea<<" "<<calculatedArea<<endl;
        cin>>radius>>total>>inside;
    }
    return 0;
}