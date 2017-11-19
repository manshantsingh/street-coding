#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <set>
using namespace std;
int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int stoint(string s){
    istringstream iss(s);
    int i;iss>>i;
    return i;
}
int main(){
    string line;getline(cin, line);
    string sin[3];
    {
        istringstream iss(line);
        getline(iss, sin[0], '/');
        getline(iss, sin[1], '/');
        iss>>sin[2];
    }
    sort(sin, sin+3);
    map<string, int> m;
    for(int i=0;i<3;i++) m[sin[i]]=stoint(sin[i]);
    set<string> s;
    do{
        int arr[3];
        for(int i=0;i<3;i++) arr[i]=m[sin[i]];
        if(sin[1].size()>2||sin[2].size()>2) continue;
        if(arr[1]<1||arr[1]>12) continue;
        if(sin[0].size()==4){
            if(arr[0]<2000||arr[0]>2999) continue;
        }
        else if(arr[0]>99) continue;
        else arr[0]+=2000;
        if(arr[2]<1||arr[2]>months[arr[1]-1]) continue;
        if(arr[1]==2 && arr[2]==29 && (arr[0]%4!=0 || (arr[0]%100==0 && arr[0]%400!=0))) continue;
        ostringstream oss;
        oss<<setfill('0')<<arr[0]<<"-"<<setw(2)<<arr[1]<<"-"<<setw(2)<<arr[2];
        s.insert(oss.str());
    }while(next_permutation(sin, sin+3));
    
    // cout<<"possible combinations: "<<endl;
    // for(auto x: s) cout<<x<<endl;
    // cout<<endl<<"ans: ";
    if(s.empty()) cout<<line<<" is illegal"<<endl;
    else cout<<*s.begin()<<endl;
    return 0;
}