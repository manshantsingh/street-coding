#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int arr[6];
    int a,b;
    for(int i=0;i<6;i++) cin>>arr[i];
    cin>>a>>b;
    
    sort(arr,arr+6);
    do{
        if(arr[0]+arr[1]+arr[2]==a){
            sort(arr,arr+3);
            sort(arr+3,arr+6);
            swap(arr[0],arr[2]);
            swap(arr[3],arr[5]);
            cout<<arr[0]<<" "
                <<arr[1]<<" "
                <<arr[2]<<" "
                <<arr[3]<<" "
                <<arr[4]<<" "
                <<arr[5]<<endl;
            break;
        }
        else if(arr[0]+arr[1]+arr[2]==b){
            sort(arr,arr+3);
            sort(arr+3,arr+6);
            swap(arr[0],arr[2]);
            swap(arr[3],arr[5]);
            cout<<arr[3]<<" "
                <<arr[4]<<" "
                <<arr[5]<<" "
                <<arr[0]<<" "
                <<arr[1]<<" "
                <<arr[2]<<endl;
            break;
        }
    }while(next_permutation(arr,arr+6));
    cout<<endl;
    return 0;
}