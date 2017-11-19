#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
bool byTime(pair<int, int> a, pair<int, int> b){return a.second<b.second;}
int main(){
    int cost[3];
    for(int i=0;i<3;i++) cin>>cost[i];
    for(int i=0;i<3;i++) cost[i]*=(i+1);
    pair<int, int> times[6];
    for(int i=0;i<3;i++){
        int a,b;
        cin>>a>>b;
        times[2*i]=make_pair(i*10,a);
        times[2*i+1]=make_pair(i*10+1,b);
    }
    sort(times, times+6, byTime);
    int totalCost=0, inside=-1;
    for(int i=0;i<5;i++){
        if(times[i].first%2==0) inside++;
        else inside--;
        if(inside>=0)totalCost+=(times[i+1].second-times[i].second)*cost[inside];
    }
    cout<<totalCost<<endl;
    return 0;
}