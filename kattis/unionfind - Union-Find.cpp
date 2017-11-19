#include <iostream>
#include <vector>
using namespace std;
struct pair_t
{
    int parent,rank;
};
int find(int p, vector<pair_t>& v){
    if (v[p].parent == p) return p;
    return v[p].parent = find(v[p].parent, v);
}
void join (int l, int r, vector<pair_t>& v) {
    if (v[l].rank > v[r].rank){
        v[r].parent = l;
    } else if (v[l].rank < v[r].rank){
        v[l].parent = r;
    } else {
        v[r].parent = l;
        v[l].rank++;
    }
}
int main(){
    int n, q;cin>>n>>q;
    vector<pair_t> v(n);
    for(int i=0;i<n;i++) v[i]={i,0};
    while(q--){
        char op; int a,b;
        cin>>op>>a>>b;
        int pa=find(a,v);
        int pb=find(b,v);
        if(op=='?') cout<<(pa==pb?"yes":"no")<<endl;
        else if(pa!=pb) join(pa, pb, v);
    }
    return 0;
}