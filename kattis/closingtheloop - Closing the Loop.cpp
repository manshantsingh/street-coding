#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool descending(int a,int b){return a>b;}
int main(){
    int t;cin>>t;
    for(int caseNum=1;caseNum<=t;caseNum++){
        int n;cin>>n;
        vector<int> red, blue;
        for(int i=0;i<n;i++){
            int a;
            char c;
            cin>>a>>c;
            if(c=='R') red.push_back(a-1);
            else blue.push_back(a-1);
        }
        int min=blue.size()<red.size()?blue.size():red.size();
        sort(red.begin(), red.end(), descending);
        sort(blue.begin(), blue.end(), descending);
        int sum=0;
        for(int i=0;i<min;i++) sum+=red[i];
        for(int i=0;i<min;i++) sum+=blue[i];
        cout<<"Case #"<<caseNum<<": "<<sum<<endl;
    }
    return 0;
}