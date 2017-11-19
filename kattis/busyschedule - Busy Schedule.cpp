#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t;cin>>t>>ws;
    while(t){
        string *arr=new string[t];
        for(int i=0;i<t;i++){
            getline(cin,arr[i]);
            if(arr[i].length()<10) arr[i]="0"+arr[i];
            if(arr[i].substr(0,2).compare("12")==0){
                if(arr[i][6]=='a') arr[i]="0"+arr[i];
                else arr[i]="2"+arr[i];
            }
            else if(arr[i][6]=='a') arr[i]="1"+arr[i];
            else arr[i]="3"+arr[i];
        }
        sort(arr,arr+t);
        for(int i=0;i<t;i++){
            if(arr[i][1]=='0') cout<<arr[i].substr(2)<<endl;
            else cout<<arr[i].substr(1)<<endl;
        }
        cout<<endl;
        cin>>t>>ws;
    }
    return 0;
}