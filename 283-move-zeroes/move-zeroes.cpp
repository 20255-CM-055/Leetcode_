class Solution {
public:
    void moveZeroes(vector<int>& arr) {
       int n=arr.size();
       vector<int> temp;

       for(int a:arr){
        if(a!=0){
            temp.push_back(a);
        }
       }

       for(int i=temp.size();i<n;i++){
        temp.push_back(0);
       }

       arr=temp;
    }
};