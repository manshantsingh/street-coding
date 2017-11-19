#include <iostream>
#include <string>
#include <vector>
using namespace std;
int value(const vector<int> &v, int base){
    int val=0;
    for(int x: v){
        val*=base;
        val+=x;
    }
    return val;
}
bool valid(int a, int b, int c, char op){
    switch(op){
        case '+':
            return a+b == c;
        case '-':
            return a-b == c;
        case '*':
            return a*b == c;
        default:
            return a/b == c && a%b==0;
    }
}
int main(){
    int n;cin>>n;
    while(n--){
        string a,b,c;char op;
        cin>>a>>op>>b>>c>>c;
        vector<int> x,y,z;
        int m=0,t=36;
        for(char cc: a){
            if(cc>'9') cc-='a'-10;
            else cc-='0';
            m=max(m,(int)cc);
            t=min(t,(int)cc);
            x.push_back(cc);
        }
        for(char cc: b){
            if(cc>'9') cc-='a'-10;
            else cc-='0';
            m=max(m,(int)cc);
            t=min(t,(int)cc);
            y.push_back(cc);
        }
        for(char cc: c){
            if(cc>'9') cc-='a'-10;
            else cc-='0';
            m=max(m,(int)cc);
            t=min(t,(int)cc);
            z.push_back(cc);
        }
        bool foundSome=false;
        if(m==1 && t==1){
            if(valid(a.size(), b.size(), c.size(), op)){
                foundSome=true;
                cout<<1;
            }
        }
        m++;
        for(int i=max(m,2);i<=36;i++){
            if(valid(value(x,i), value(y,i), value(z,i), op)){
                foundSome=true;
                if(i==36) cout<<0;
                else if(i>9) cout<<((char)(i-10+'a'));
                else cout<<i;
            }
        }
        if(!foundSome) cout<<"invalid";
        cout<<endl;
    }
    return 0;
}