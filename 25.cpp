//Brute force
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i,j;
        int c=0;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]<target){
                    c++;
                }
            }
        }
        return c;
    }
};

//optimal
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        int c=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]<target){
                c=c+(j-i);
                i++;
            }else{
                j--;
            }
        }
        return c;
    }
};



// Step 1: Sort the array
// [0,1,2,3,4]
// Indexes:
//  0 1 2 3 4

// 🔹 Initialize
// i = 0
// j = 4
// c = 0
// 🔁 Iteration 1
// nums[i] = 0
// nums[j] = 4

// 0 + 4 = 4 < 5 ✔

// 👉 All pairs with i=0 and indices till j are valid:

// (0,1), (0,2), (0,3), (0,4)  becoz array is sorted

// Count:
// j - i = 4 - 0 = 4
// c = 4
// i++

// Now:
// i = 1, j = 4
// 🔁 Iteration 2
// nums[i] = 1
// nums[j] = 4

// 1 + 4 = 5 ❌ (not < target)
// 👉 Too big → reduce j
// j--

// Now:
// i = 1, j = 3
// 🔁 Iteration 3
// nums[i] = 1
// nums[j] = 3

// 1 + 3 = 4 < 5 ✔
// Valid pairs:
// (1,2), (1,3)

// Count:
// j - i = 3 - 1 = 2
// c = 4 + 2 = 6
// i++

// Now:
// i = 2, j = 3
// 🔁 Iteration 4
// nums[i] = 2
// nums[j] = 3

// 2 + 3 = 5 ❌
// j--

// Now:

// i = 2, j = 2
// 🛑 Stop Condition
// i < j ❌ (2 < 2 is false)
// ✅ Final Answer
// c = 6

// 📊 All Valid Pairs
// From original sorted array:
// (0,1) → 0+1=1 ✔
// (0,2) → 0+2=2 ✔
// (0,3) → 0+3=3 ✔
// (0,4) → 0+4=4 ✔
// (1,2) → 1+2=3 ✔
// (1,3) → 1+3=4 ✔

// Total = 6 pairs ✅
