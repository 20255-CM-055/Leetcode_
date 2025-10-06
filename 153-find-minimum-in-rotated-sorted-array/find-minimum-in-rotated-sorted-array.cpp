class Solution {
public:
    int findMin(vector<int>& nums) {
        int n1=nums.size();
        int small=INT_MAX;

        for(int i=0;i<n1;i++)
        {
            small=min(nums[i],small);
        }

        return small;
    }
};