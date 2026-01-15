#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"input n : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"input array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"input k : ";
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"index is at :"<<i;
            break;
        }
    }
}
