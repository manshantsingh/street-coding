#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b){
    while(b){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int lcm(int a, int b){
    return a/gcd(a,b)*b;
}
int main(){
    while(true){
        int n;cin>>n;
        if(n==0) break;
        bool noBound=true;
        int a=1,b=0, d=1;
        while(n--){
            string s,tmp;int i;
            cin>>s>>tmp>>i;
            if(s=="less"){
                if(noBound){
                    b=i-1;
                    noBound=false;
                }
                else{
                    b=min(b,i-1);
                }
            }
            else if(s=="greater"){
                a=max(a,i+1);
            }
            else{
                d=lcm(d,i);
            }
        }
        if(noBound){
            cout<<"infinite"<<endl;
        }
        else if(a>b){
            cout<<"none"<<endl;
        }
        else{
            bool found=false;
            int i=(a/d)*d;
            if(i<a) i+=d;
            while(i<=b){
                if(!found) found=true;
                else cout<<" ";
                cout<<i;
                i+=d;
            }
            if(!found) cout<<"none";
            cout<<endl;
        }
    }
    return 0;
}