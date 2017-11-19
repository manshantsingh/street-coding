#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
struct cdetails_t{
    int catalog, pickup, km;
};
struct pdetails_t{
    int bill=0;
    string car="";
};
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        map<string, cdetails_t> cars;
        while(n--){
            string s;int p,q,k;
            cin>>s>>p>>q>>k;
            cars[s] = {p,q,k};
        }
        multimap<int, string> events;
        while(m--){
            int tt;string s;
            cin>>tt;getline(cin, s);
            events.insert({tt,s});
        }
        map<string, pdetails_t> spies;
        for(auto ev: events){
            istringstream iss(ev.second);
            string name, e;iss>>name>>e;
            pdetails_t &spy = spies[name];
            if(spy.bill<0) continue;
            if(e=="p"){
                if(spy.car.size()>0){
                    spy.bill=-1;
                    continue;
                }
                string cname;iss>>cname;
                spy.bill += cars[cname].pickup;
                spy.car = cname;
                continue;
            }
            if(spy.car.size()<1) {
                spy.bill=-1;
                continue;
            }
            int val;iss>>val;
            if(e=="r"){
                spy.bill += cars[spy.car].km * val;
                spy.car = "";
            }
            else{
                int dmg=cars[spy.car].catalog * val;
                spy.bill += dmg/100 + (dmg%100==0?0:1);
            }
        }
        for(auto x: spies){
            cout<<x.first<<" ";
            if(x.second.bill<0 || x.second.car.size()>0) cout<<"INCONSISTENT"<<endl;
            else cout<<x.second.bill<<endl;
        }
    }
    return 0;
}