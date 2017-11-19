#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int h,v;cin>>h>>v;
    cout<<((int) ceil(h/sin(v*3.14159265/180.0)))<<endl;
}