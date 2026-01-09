//Remove Duplicates from Sorted Array
// using stack as well as arrays

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n=nums.size();
//         int j=0;
//         for(int i=1;i<n;i++){
//             if(nums[i]!=nums[j]){
//                 j++;
//                 nums[j]=nums[i];
//             }
//         }
//         return (j+1);
//     }
// };

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int duplicates(vector<int>&arr, int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        if(st.empty()||st.top()!=arr[i]){
            st.push(arr[i]);
        }
    }
    int size=st.size();
    for(int i=size-1;i>=0;i--){
        arr[i]=st.top();
        st.pop();
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array after removing duplicates: ";
    duplicates(arr,n);
    return 0;
}


//without stack we can use two pointer approach
