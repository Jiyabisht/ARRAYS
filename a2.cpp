#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int>&arr,int n){
    int max=arr[0],max2=-1; //if no negative no. in an array
    for(int i=0;i<n;i++){        //5
        if(arr[i]>max){          //-10 -20 -5 -30 -15
            max=arr[i];          //Correct second largest → -10
        }                        //Your output → -1 ❌ (not even in array)
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }
    return max2;
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
    cout<<"second largest is "<<largest(arr,n);
    return 0;
}


#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int largest(vector<int>&arr,int n){
    int max=arr[0],max2=INT_MIN;  //if negative no. is there in an array
    for(int i=0;i<n;i++){
        if(arr[i]>max){           //INT_MIN is a constant that represents the smallest possible value an int data type can store in C++.
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]<max){
            max2=arr[i];
        }
    }
    return max2;
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
    cout<<"second largest is "<<largest(arr,n);
    return 0;
}
