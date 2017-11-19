#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
using namespace std;
const int CHAR_TO_INT=(int)'0';
const int DOUBLE_CHAR_TO_INT=CHAR_TO_INT*2;
void printSum(const string& small, const string& big){
    vector<uint_fast16_t> sum;
    sum.reserve(big.size()+1);
    int a=small.size()-1, b=big.size()-1;
    int carry=0;
    while(a>=0){
        int val=small[a]+big[b]+carry-DOUBLE_CHAR_TO_INT;
        sum.push_back(val%10);
        carry=val/10;
        a--;
        b--;
    }
    while(b>=0){
        int val=big[b]+carry-CHAR_TO_INT;
        sum.push_back(val%10);
        carry=val/10;
        b--;
    }
    if(carry>0) sum.push_back(carry);
    for(auto rit=sum.rbegin();rit!=sum.rend();rit++){
        cout<<*rit;
    }
    cout<<endl;
}
int main(){
    string sa,sb;cin>>sa>>sb;
    if(sa.size()>sb.size()) printSum(sb,sa);
    else printSum(sa,sb);
    return 0;
}