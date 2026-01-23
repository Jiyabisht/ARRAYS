class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        int i=0,j=n-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    return;
    }
};

//do not use for(i and j) loop in this case
