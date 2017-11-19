#include <iostream>
using namespace std;
int insertionSort(int arr[]){
    int totalSwaps=0;
    for(int i=1;i<20;i++){
        int j=0;
        while(j<i){
            if(arr[i]<arr[j]) break;
            j++;
        }
        if(j>=i) continue;
        totalSwaps+=i-j;
        int temp=arr[i];
        for(int x=i;x>j;x--) arr[x]=arr[x-1];
        arr[j]=temp;
    }
    return totalSwaps;
}
int main(){
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        int arr[20];
        for(int i=0;i<20;i++) cin>>arr[i];
        cout<<k<<" "<<insertionSort(arr)<<endl;
    }
    return 0;
}