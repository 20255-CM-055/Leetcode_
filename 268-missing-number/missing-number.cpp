class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int act=(n*(n+1))/2;

        for(int a:nums){
            sum=sum+a;
        }

        return act-sum;
    }
};