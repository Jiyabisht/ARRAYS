//Bruteforce
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter taget :";
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"pair found at index "<<i<<" and "<<j<<endl;
            }
        }
    }
    return 0;
}

//optimal
