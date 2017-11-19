#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    bool firstDone =false;
    while(true){
        unsigned int n;cin>>n;
        string line;getline(cin, line);
        if(n==0) break;
        if(firstDone) cout<<endl;
        else firstDone = true;
        string *arr = new string[n];
        unsigned int len=0;
        for(unsigned int i=0;i<n;i++) {
            getline(cin, arr[i]);
            len = max(len, (unsigned int)arr[i].length());
        }
        for(unsigned int i=0;i<len;i++){
            ostringstream oss;
            for(int j=n-1;j>=0;j--){
                if(arr[j].length()<i) oss<<" ";
                else{
                    char c=arr[j][i];
                    if(c=='-') oss<<"|";
                    else if(c=='|') oss<<"-";
                    else if(c==0) oss<<" ";
                    else oss<<c;
                }
            }
            string s = oss.str();
            int num = s.length();
            while(num>0){
                if(s[num-1]!=' ') break;
                num--;
            }
            cout<<s.substr(0,num)<<endl;
        }
        delete[] arr;
    }
    return 0;
}