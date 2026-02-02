//bruteforce solutions
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    c++;
                }
            }
            if(c==1) return nums[i];
        }
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
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

// key → number from array
// value → frequency (count)
// What does mp[nums[i]] mean?
// nums[i] → current element in the array
// mp[nums[i]] → value (count) stored for that element
// 🔸 Important rule of map
// If the key does not exist, C++:
    // creates it automatically
    // initializes its value to 0
