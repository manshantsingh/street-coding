#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string line;
    cout<<fixed<<setprecision(6);
    while(getline(cin, line)){
        double totalSum=0.0;
        int numTimes=0;
        istringstream iss(line);
        string name="";
        while(true){
            double temp;
            if(iss>>temp){
                totalSum+=temp;
                numTimes++;
            }
            else{
                iss.clear();
                iss.sync();
                string stemp;
                if(iss>>stemp) name+=" "+stemp;
                else break;
            }
        }
        cout<<totalSum/numTimes<<name<<endl;
    }
    return 0;
}