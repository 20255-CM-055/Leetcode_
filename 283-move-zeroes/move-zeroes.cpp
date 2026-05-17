class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;

        for(int a:nums){
            if(a!=0){
                temp.push_back(a);
            }
        }

        int len=temp.size();

        for(int i=len;i<n;i++){
            temp.push_back(0);
        }

        nums.assign(temp.begin(),temp.end());
    }
};