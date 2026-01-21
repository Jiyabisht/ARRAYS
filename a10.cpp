#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void unionarr(vector<int>& arr1,vector<int>& arr2,int n,int m){
    vector<int>res;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if(res.empty()||res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i]>arr2[j]){
            if(res.empty()||res.back()!=arr2[j]){
                res.push_back(arr2[j]);
            }
            j++;
        }
        else if(arr1[i]==arr2[j]){
            if(res.empty() || res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while(i<n){
            if(res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
        }
    while(j<m){
        if(res.back()!=arr2[j]){
            res.push_back(arr2[j]);
        }
        j++;
    }
    for(int k=0;k<res.size();k++){
        cout<<res[k]<<" ";
    }
    return;
}


int main(){
    int n,m;
    cout<<"enter n and m:";
    cin>>n>>m;
    vector<int>arr1(n);
    cout<<"enter array 1 elements:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(m);
    cout<<"enter array 2 elements:";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    unionarr(arr1,arr2,n,m);
}
