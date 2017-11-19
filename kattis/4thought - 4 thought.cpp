#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int operation(int a, int b, int op){
    if(op==300) return a*b;
    if(op==301) return a+b;
    if(op==302) return a-b;
    return a/b;
}
char symbol(int op){
    if(op==300) return '*';
    if(op==301) return '+';
    if(op==302) return '-';
    return '/';
}
int main(){
    int seq[7]={4,-1,4,-1,4,-1,4};
    //encoding{'*','+','-','/'};
    int op[3]={0,0,0};
    int order[4]={303,300,301,302};
    map<int,string> m;
    int num=0;
    while(true){
        vector<int> currentSeq(seq, seq+7);
        ostringstream oss;
        for(int i=0;i<3;i++){
            currentSeq[2*i+1]=op[i];
        }
        for(unsigned int i=0;i<currentSeq.size();i++){
            if(i%2==0) oss<<currentSeq[i]<<" ";
            else oss<< symbol(currentSeq[i])<<" ";
        }
        for(int j=0;j<4;j++){
            for(unsigned int i=1;i<currentSeq.size();i+=2){
                if(currentSeq[i]==order[j]){
                    currentSeq[i-1]=operation(currentSeq[i-1],currentSeq[i+1],order[j]);
                    currentSeq.erase(currentSeq.begin()+i, currentSeq.begin()+i+2);
                    i-=2;
                }
            }
        }
        oss<<"= "<<currentSeq[0];
        m[currentSeq[0]]=oss.str();
        num++;
        if(num%10==4){
            num+=6;
            if(num%100==40){
                num+=60;
                if(num==400) break;
            }
        }
        int temp=num;
        for(int i=0;i<3;i++){
            op[i]=300+temp%10;
            temp/=10;
        }
    }
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(m.find(num)==m.end()) cout<<"no solution"<<endl;
        else cout<<m[num]<<endl;
    }
    return 0;
}