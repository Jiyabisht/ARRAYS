class Solution {
public:
    int maxArea(vector<int>& arr) {
        int max_area=0,i=0,j=arr.size()-1;
        while(i<j){
            int height=min(arr[i],arr[j]);   //min height is taken as see in graph both height should be common or equal
            int area=height*(j-i);   //j-1 is width(sub of index to calculate base)
            max_area=max(max_area,area);
            if(arr[i]<arr[j]){
                i++;
            }else{
                j--;
            }
        }
        return max_area;
    }
};
