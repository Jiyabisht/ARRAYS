class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int c=0,max=0;;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                c++;
                if(c>max){
                    max=c;
                }
            }else
                c=0;
            }
        return max;
    }
};


//complete
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// void unionarr(vector<int>& arr1,vector<int>& arr2,int n,int m){
//     vector<int>res;
//     int i=0,j=0;
    //}


int main(){
    int c=0,c1=0;
    int n;
    cout<<"enter n : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            c++;
            if(c1<c)
                c1=c;
        }else{
            c=0;
        }
    }
    cout<<"Maximum count is "<<c1;
    return 0;
}
