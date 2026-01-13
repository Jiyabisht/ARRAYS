#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int duplicates(vector<int>&arr, int n, int k){
    k=k%n;
    while(k!=0){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    k--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int n,k;
    cout<<"enter n";
    cin>>n;
    cout<<"enter k";
    cin>>k;
    vector<int>arr(n);
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicates(arr,n,k);
    return 0;
}


// };
