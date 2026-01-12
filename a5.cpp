#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int duplicates(vector<int>&arr, int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicates(arr,n);
    return 0;
}
