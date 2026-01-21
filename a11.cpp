//bruteforce approach
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Missing no is "<<i<<" ";
        }
    }
}

//optimal solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=nums.size();
        int sum=(s*(s+1))/2;
        int sums=0;
        for(int i=0;i<s;i++){
            sums=sums+nums[i];
        }
        int diff=sum-sums;
        return diff;
    }
};
