#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int t;cin>>t;
    while(t--){
        char c;int d,h,m;
        cin>>c>>d>>h>>m;
        if(c == 'F'){
            m += d;
            h += m/60;
            m %= 60;
            h %= 24;
        }
        else{
            m -= d;
            if(m<0){
                int val = (-m)/60;
                if(m%60) val++;
                m += val * 60;
                h -= val;
                if(h<0){
                    val  = (-h)/24;
                    if(h%24) val++;
                    h += val * 24;
                }
            }
        }
        cout<<h<<" "<<m<<endl;
    }
    return 0;
}