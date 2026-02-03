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
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;      //<key,value> i.e. <element,index>

        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];       // if target is 4 arr is [1,2,3] then 4-1 is 3 ,next heck for 3 in map is present return index else add it to map
            if(mp.find(need) != mp.end()) {    //mp.find(need):Searches for key = need in the hashmap     Returns:an iterator to that key if it exists
                return {mp[need], i};          //mp.end():Iterator that points just after the last element     Used as a marker for “not found”
            }
            mp[nums[i]] = i;                   //if not found then add that element(new) to map
        }
        return {};
    }
};
// When we do:
// if(mp.find(key) != mp.end())
// It means:
// mp.find(key) found the key in the map ✅

// When:
// mp.find(key) == mp.end()
// It means:
// key does NOT exist in the map ❌
