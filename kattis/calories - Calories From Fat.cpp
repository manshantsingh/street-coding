#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;
const int grams[5]={9,4,4,4,7};
int main(){
    string line;
    getline(cin,line);
    while(line.compare("-")!=0){
        vector<pair<double,double> > answers;
        while(line.compare("-")!=0){
            istringstream iss(line);
            pair<int, char> arr[5];
            for(int i=0;i<5;i++){
                int n;char c;
                iss>>n>>c;
                if(c=='g'){
                    arr[i]=make_pair(n*grams[i],'C');
                }
                else arr[i]=make_pair(n,c);
            }
            int perc=0, cal=0;
            for(int i=0;i<5;i++){
                if(arr[i].second=='C') cal+=arr[i].first;
                else perc+=arr[i].first;
            }
            double perd=100-perc;
            double totald=cal*100/perd;
            if(arr[0].second=='%'){
                answers.push_back(make_pair(arr[0].first*totald/100,totald));
            }
            else{
                answers.push_back(make_pair(arr[0].first,totald));
            }
            getline(cin,line);
        }
        double fatd=0,totald=0;
        for(int i=0;i<answers.size();i++){
            fatd+=answers[i].first;
            totald+=answers[i].second;
        }
        cout<<(int)round(fatd*100/totald)<<"%"<<endl;
        getline(cin,line);
    }
    return 0;
}