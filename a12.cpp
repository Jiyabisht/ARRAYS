//bruteforce code
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int pro=1;
            for(int j=0;j<n;j++){
                if(j!=i){
                    pro=pro*nums[j];
                }
            }
            res[i]=pro;
        }
        return res;
    }
};


//better approach with time complexity=O(3N)=O(n) and space complexity=O(n)
//we make prefix arr and suffix arr then we combine their product in res array
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        vector<int>suf(n);
        vector<int>pre(n);
        pre[0]=1;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        suf[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            res[i]=suf[i]*pre[i];
        }
        return res;
    }
};
//optimal solution = we reduce space complexity to O(1)
