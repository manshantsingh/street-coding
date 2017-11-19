#include <iostream>
#include <string>
#include <utility>
#include <map>
#include <set>
using namespace std;
int abs(int a){
    return a<0?-a:a;
}
int main(){
    string arr[3]={"qwertyuiop","asdfghjkl","zxcvbnm"};
    map<char,pair<int,int> > m;
    for(int i=0;i<3;i++){
        for(unsigned int j=0;j<arr[i].size();j++){
            m[arr[i][j]]={i,j};
        }
    }
    int t;cin>>t;
    while(t--){
        string word;int n;
        cin>>word>>n;
        map<int,set<string> > mm;
        while(n--){
            int sum=0;
            string temp;cin>>temp;
            for(unsigned int i=0;i<word.size();i++){
                pair<int,int> a=m[word[i]], b=m[temp[i]];
                sum+=abs(a.first-b.first)+abs(a.second-b.second);
            }
            mm[sum].insert(temp);
        }
        for(auto x: mm){
            for(string s: x.second) cout<<s<<" "<<x.first<<endl;
        }
    }
    return 0;
}