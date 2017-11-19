#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string line;
    vector<int> lengths;
    int max=0;
    while(getline(cin,line)){
        int a=line.size();
        if(a>max) max=a;
        lengths.push_back(a);
    }
    int penelty=0;
    for(unsigned int i=0;i<lengths.size()-1;i++){
        int diff=max-lengths[i];
        penelty+=diff*diff;
    }
    cout<<penelty<<endl;
    return 0;
}