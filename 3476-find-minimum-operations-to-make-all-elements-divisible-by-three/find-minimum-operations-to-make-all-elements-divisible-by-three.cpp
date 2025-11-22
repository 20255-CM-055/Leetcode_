class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();

        for(int a:nums){
            if(a%3!=0){
                cnt++;
            }
        }

        return cnt;
    }
};