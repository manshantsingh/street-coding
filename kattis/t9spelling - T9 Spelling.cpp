#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<string> ENCODED{
        "2","22","222",
        "3","33","333",
        "4","44","444",
        "5","55","555",
        "6","66","666",
        "7","77","777","7777",
        "8","88","888",
        "9","99","999","9999"
    };
    map<int,set<int>> GROUPS{
        {0,{0,1,2}},
        {1,{0,1,2}},
        {2,{0,1,2}},
        {3,{3,4,5}},
        {4,{3,4,5}},
        {5,{3,4,5}},
        {6,{6,7,8}},
        {7,{6,7,8}},
        {8,{6,7,8}},
        {9,{9,10,11}},
        {10,{9,10,11}},
        {11,{9,10,11}},
        {12,{12,13,14}},
        {13,{12,13,14}},
        {14,{12,13,14}},
        {15,{15,16,17,18}},
        {16,{15,16,17,18}},
        {17,{15,16,17,18}},
        {18,{15,16,17,18}},
        {19,{19,20,21}},
        {20,{19,20,21}},
        {21,{19,20,21}},
        {22,{22,23,24,25}},
        {23,{22,23,24,25}},
        {24,{22,23,24,25}},
        {25,{22,23,24,25}}
    };
    int n;
    // cin>>n>>ws;
    string numberLine;
    getline(cin, numberLine);
    n=stoi(numberLine);
    for(int x=1;x<=n;x++){
        cout<<"Case #"<<x<<": ";
        string line; getline(cin,line);
        if(line.size()>0){
            if(line[0]==' ') cout<<0;
            else cout<<ENCODED[line[0]-'a'];
        }
        for(int i=1;i<line.size();i++){
            if(line[i]==' '){
                if(line[i-1]==' ') cout<<' ';
                cout<<0;
            } else{
                int current = line[i]-'a', older = line[i-1]-'a';
                auto& cg = GROUPS[current];
                if(cg.find(older)!=cg.end()) cout<<' ';
                cout<<ENCODED[current];
            }
        }
        cout<<endl;
    }
    return 0;
}