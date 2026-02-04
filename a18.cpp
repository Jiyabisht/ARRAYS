class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c1=0,c0=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0){
                c0++;
            }else{
                c1++;
            }
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0){
                if(c0==0) break;
                c0--;
            }else{
                if(c1==0) break;
                c1--;
            }
        }
        int sum= c0+c1;
        return sum;
    }
};
//The time complexity of this solution is O(n + m), where n is the size of the students vector and m is the size of the sandwiches vector.
//The space complexity is O(1)
