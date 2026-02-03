//bruteforce solutions
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                    c++;
                }
            }
            if(c==0) return nums[i];
        }
        return -1
    }
};
//Time comp=O(n^2)
//space complex.=O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;  //automatically count is 0 then it increases add element in hashmap
        
// Case 1️⃣: Key does NOT exist yet
// Example:
// nums[i] = 5
// mp[5] does NOT exist
// unordered_map automatically creates it
// Default value = 0
// Then:
// mp[5]++  →  0 + 1 = 1
// ✅ Now map has:
// 5 → 1

// Case 2️⃣: Key already exists
// If later another 5 comes:
// mp[5]++  →  1 + 1 = 2
// Now:
// 5 → 2
        }
        for(int i = 0; i < nums.size(); i++) {
            if(mp[nums[i]] == 1) {
            return nums[i];
            }
        }
        // Iterate using .first and .second
        // for(auto it : mp) {
        //     if(it.second == 1) {
        //         return it.first;
        //     }
        // }
        return -1;
    }
};
//Time and Space complexity both are O(n)
// key → number from array
// value → frequency (count)
// What does mp[nums[i]] mean?
// nums[i] → current element in the array
// mp[nums[i]] → value (count) stored for that element
// 🔸 Important rule of map
// If the key does not exist, C++:
    // creates it automatically
    // initializes its value to 0
