#include <bits/stdc++.h>
using namespace std;
const char ADD='a'-1, BEFORE='a'-2, AFTER='z'+1;
int main(){
    int n;
    while(cin>>n){
        multiset<string> s;
        while(n--){
            string word; cin>>word;
            cout<<distance(s.lower_bound(word+BEFORE),s.upper_bound(word+AFTER))<<endl;
            s.insert(word+ADD);
        }
    }
    return 0;
}