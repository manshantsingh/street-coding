#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int totalStones, numCombinations;
    while(cin>>totalStones>>numCombinations){
        int *arr=new int[numCombinations];
        for(int i=0;i<numCombinations;i++) cin>>arr[i];
        sort(arr,arr+numCombinations);
        bool *dp=new bool[totalStones+1]();
        //dp[0] is never used (ignoring it since numbers going from 1...totalStones)
        for(int i=1;i<=totalStones;i++){
            if(binary_search(arr,arr+numCombinations, i)){
                dp[i]=true;
                continue;
            }
            for(int j=0;j<numCombinations;j++){
                if(i<=arr[j]) continue;
                if(!dp[i-arr[j]]){
                    dp[i]=true;
                    break;
                }
            }
        }
        if(dp[totalStones]) cout<<"Stan wins"<<endl;
        else cout<<"Ollie wins"<<endl;
        delete[] dp;
    }
    return 0;
}