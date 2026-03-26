//bruteforce
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]==0) c0++;
            else if(nums[i]==1) c1++;
            else c2++;
        }
        int i=0;
        while(c0!=0){
            nums[i]=0;
            i++;
            c0--;
        }
        while(c1!=0){
            nums[i]=1;
            i++;
            c1--;
        }
        while(c2!=0){
            nums[i]=2;
            i++;
            c2--;
        }
    }
};
/*
In summary:
Time complexity: O(n)
Space complexity: O(1)
*/


//optimal solution
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,k=0,j=nums.size()-1;
        while(k <= j){
            if(nums[k]==1) k++;
            else if(nums[k]==2){
                swap(nums[k],nums[j]);
                j--;
            }else if(nums[k]==0){
                swap(nums[k],nums[i]);
                i++;
                k++;
            }
        }
    }
};
/*
| Type  | Complexity |
| ----- | ---------- |
| Time  | **O(n)** ✅ |
| Space | **O(1)** ✅ |
Why it's optimal
Faster than counting? → Same O(n), but 1 pass instead of 2
*/
