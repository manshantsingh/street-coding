#include <iostream>
using namespace std;
typedef unsigned long long ull_t;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ull_t currentSum=0;
        for(int i=0;i<n;i++){
            ull_t a;cin>>a;
            currentSum=(currentSum+(a%n))%n;
        }
        cout<<(currentSum==0?"YES":"NO")<<endl;
    }
    return 0;
}