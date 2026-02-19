 // Brute force 
class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        vector<int>res;
        int i=0,j=0;
        while(i<m && j<n){
            if(arr1[i]<arr2[j]){
                res.push_back(arr1[i]);                //
                i++;
            }else if(arr1[i]>arr2[j]){
                res.push_back(arr2[j]);
                j++;
            }else if (arr1[i]==arr2[j]){
                res.push_back(arr1[i]);
                res.push_back(arr2[j]);
                i++;
                j++;
            }
        }
        while(i<m){
            res.push_back(arr1[i]);
            i++;
        }
        while(j<n){
            res.push_back(arr2[j]);
            j++;
        }
      
        for (int k = 0; k < m + n; k++) {
            arr1[k] = res[k];   
        }
    }
};

| Approach    | Time   | Space    |
| ----------- | ------ | -------- |
| Brute Force | O(m+n) | O(m+n) ❌ |
| Optimal     | O(m+n) | O(1) ✅   |
