#include <iostream>
#include <string>
using namespace std;
int main(){
    const int UPPER = ((int) 'a') - ((int)'A');
    int n;cin>>n>>ws;
    while(n--){
        string line;getline(cin,line);
        bool arr[26]={false};
        for(char c: line){
            if(c>'Z') c-=UPPER;
            if(c>='A' && c<='Z') arr[(int)(c-'A')]=true;
        }
        bool allFine=true;
        for(int i=0;i<26;i++){
            if(!arr[i]){
                if(allFine){
                    cout<<"missing ";
                    allFine=false;
                }
                cout<<((char)('a'+i));
            }
        }
        if(allFine) cout<<"pangram";
        cout<<endl;
    }
    return 0;
}