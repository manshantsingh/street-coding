#include <iostream>
#include <cstdint>
using namespace std;
uint64_t fast_mod_pow(uint64_t e){
    e--;
    const unsigned BASE = 9, MOD = 1000000007;
    uint64_t ans = 1, b = BASE;
    while(e > 0){
        if(e & 1) ans = (ans * b) % MOD;
        b = (b * b) % MOD;
        e >>= 1;
    }
    ans = (ans * 8) % MOD;
    return ans;
}
int main(){
    int t;cin>>t;
    while(t--){
        uint64_t d;cin>>d;
        cout << fast_mod_pow(d) << endl;
    }
    return 0;
}