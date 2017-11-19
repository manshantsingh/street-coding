#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int t;cin>>t;
    int mins=0, seconds=0;
    while(t--){
        int m,s;
        cin>>m>>s;
        mins+=m;
        seconds+=s;
    }
    if(mins*60>=seconds) cout<<"measurement error"<<endl;
    else cout<<fixed<<setprecision(9)<<seconds/(mins*60.0)<<endl;
    return 0;
}