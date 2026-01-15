class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int j=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
            }
        }
    }
};

