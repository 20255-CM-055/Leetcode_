class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n1=nums.size();
        int f=-1,l=-1;

        for(int i=0;i<n1;i++)
        {
            if(nums[i]==target)
            {
                if(f==-1)
                {
                    f=i;
                }
                l=i;
            }
        }

        return {f,l};
    }
};