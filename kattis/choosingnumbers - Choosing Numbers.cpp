#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool greaterGCD(int b, int a){
    while(b){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a>1;
}
int main(){
    int n;
    int count=0;
    while(cin>>n){
        int * nums=new int[n];
        for(int i=0;i<n;i++) cin>>nums[i];
        sort(nums, nums+n);
        int last=n-1;
        vector<int> answers;
        while(last>=0){
            bool done=true;
            for(int i=0;i<n;i++){
                if(i==last) continue;
                if(greaterGCD(nums[i],nums[last])){
                    done=false;
                    break;
                }
            }
            if(done){
                cout<<nums[last]<<endl;
                break;
            }
            last--;
        }
    }
    return 0;
}