#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int>&arr,int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter all elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr,n);
    return 0;
}