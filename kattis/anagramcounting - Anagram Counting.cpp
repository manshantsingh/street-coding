#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
using namespace std;
typedef unsigned int ui_t;
const ui_t PART_SIZE = 10000000;
void mf(ui_t n, vector<ui_t>& v){
    for(ui_t i=2;i<=n;i++){
        ui_t carry = 0;
        for(ui_t& x: v){
            x *= i;
            x += carry;
            carry = x/PART_SIZE;
            x %= PART_SIZE;
        }
        if(carry){
            v.push_back(carry);
        }
    }
}
void df(ui_t n, vector<ui_t>& v){
    for(ui_t i=2;i<=n;i++){
        ui_t carry = 0;
        for(auto it=v.rbegin();it!=v.rend();it++){
            *it += carry * PART_SIZE;
            carry = *it % i;
            *it /= i;
        }
    }
}
int main(){
    string line;
    while(cin>>line){
        vector<ui_t> v {1};
        mf(line.size(), v);
        map<char, ui_t> m;
        for(char c: line) m[c]++;
        for(auto x: m) df(x.second, v);
        bool zerosGone = false;
        for(auto it=v.rbegin();it!=v.rend();it++){
            if(!zerosGone){
                if(*it){
                    zerosGone=true;
                    cout<<*it;
                }
            }
            else cout<<setfill('0') << setw(7)<<*it;
        }
        cout<<endl;
    }
    return 0;
}