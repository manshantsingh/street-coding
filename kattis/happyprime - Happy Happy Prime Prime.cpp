#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool nothappy(int num){
    set<int> s;
    int ans=num;
    do{
        num=ans;
        ans=0;
        while(num){
            int mod=num%10;
            num/=10;
            ans+=mod*mod;
        }
        if(s.find(ans)==s.end()) s.insert(ans);
        else return true;
    }while(ans!=1);
    return false;
}
int main(){
    vector<int> primes;
    for(int i=2;i<=10000;i++){
        bool composite=false;
        for(unsigned int j=0;j<primes.size();j++){
            if(i%primes[j]==0){
                composite=true;
                break;
            }
        }
        if(!composite) primes.push_back(i);
    }
    set<int> s;
    for(unsigned int i=0;i<primes.size();i++) s.insert(primes[i]);
    int n;cin>>n;
    while(n--){
        int caseNum, num;
        cin>>caseNum>>num;
        cout<<caseNum<<" "<<num;
        if(s.find(num)==s.end()||nothappy(num)) cout<<" NO"<<endl;
        else cout<<" YES"<<endl;
    }
    return 0;
}