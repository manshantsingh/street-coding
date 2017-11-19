#include <iostream>
#include <utility>
#include <vector>
using namespace std;
typedef pair<int, int> coord_t;
int abs(int a){
    return a>=0?a:-a;
}
bool ans(const vector<coord_t>& queens){
    if(queens.size()!=8) return false;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            coord_t a=queens[i];
            coord_t b=queens[j];
            if(a.first==b.first||a.second==b.second||
                abs(a.first-b.first)==abs(a.second-b.second)) return false;
        }
    }
    return true;
}
int main(){
    vector<coord_t> queens;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char c;cin>>c;
            if(c=='*') queens.push_back(make_pair(i,j));
        }
    }
    if(!ans(queens)) cout<<"in";
    cout<<"valid"<<endl;
    return 0;
}