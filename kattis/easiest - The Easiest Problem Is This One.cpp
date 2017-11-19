#include <iostream>
using namespace std;
int sumd(int a){
    int sum=0;
    while(a){
        sum += a%10;
        a/=10;
    }
    return sum;
}
int main(){
    while(true){
        int n;cin>>n;
        if(n==0) break;
        int sumN=sumd(n);
        int p=11;
        while(true){
            if(sumN == sumd(n*p)){
                cout<<p<<endl;
                break;
            }
            p++;
        }
    }
    return 0;
}