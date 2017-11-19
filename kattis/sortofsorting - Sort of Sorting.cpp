#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool first2Sorted(string a, string b){
    return a.substr(0,2)<b.substr(0,2);
}
void iteration(int n){
    string *arr=new string[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    stable_sort(arr,arr+n, first2Sorted);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}
int main(){
    int n;
    cin>>n;
    if(n==0) return 0;
    iteration(n);
    cin>>n;
    while(n){
        cout<<endl;
        iteration(n);
        cin>>n;
    }
    return 0;
}