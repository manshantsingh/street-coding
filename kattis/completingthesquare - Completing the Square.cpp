#include <iostream>
#include <cmath>
#include <utility>
using namespace std;
int calc(int ax, int ay, int bx, int by){
    int dx=bx-ax,
        dy=by-ay;
    int sx=dx*dx,
        sy=dy*dy;
    return sx+sy;
}
void point(int d1x, int d1y, int d2x, int d2y, int cx, int cy){
    int diffx = d2x-cx,
        diffy = d2y-cy;
    cout<<(d1x+diffx)<<" "<<(d1y+diffy)<<endl;
}
int main(){
    int arr[6];
    for(int i=0;i<6;i++) cin>>arr[i];
    int ab = calc(arr[0],arr[1],arr[2],arr[3]),
        bc = calc(arr[2],arr[3],arr[4],arr[5]),
        ac = calc(arr[0],arr[1],arr[4],arr[5]);
    int m = max(ab, max(bc, ac));
    if(m==ab) point(arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
    else if(m==bc) point(arr[2],arr[3],arr[4],arr[5],arr[0],arr[1]);
    else point(arr[0],arr[1],arr[4],arr[5],arr[2],arr[3]);
    return 0;
}