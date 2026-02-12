//time comp= O(nlogn) Space comp=O(1)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            arr[i]=arr[i]*arr[i];
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};

//Time comp=O(n) space comp=O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        vector<int>pos;
        vector<int>neg;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }else{
                pos.push_back(arr[i]);
            }
        }
        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }
        int i=0,j=0,m=pos.size(),k=neg.size();
        while(i<m && j<k){
            if(pos[i]<neg[j]){
                res.push_back(pos[i]);
                i++;
            }else if(pos[i]>neg[j]){
                res.push_back(neg[j]);
                j++;
            }else if(pos[i]==neg[j]){
                res.push_back(pos[i]);
                res.push_back(neg[j]);
                i++;
                j++;
            }
        }
        while(i<m){
            res.push_back(pos[i]);
            i++;
        }
        while(j<k){
            res.push_back(neg[j]);
            j++;
        }
    return res;
    }
};
