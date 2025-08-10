class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int f=-1;
        int s=-1;
        int index=-1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>f)
            {
                s=f;
                f=nums[i];
                index=i;
            }
            else if(nums[i]>s)
            {
                s=nums[i];
            }
        }

        if(s*2 <=f)
        {
            return index;
        }

        return -1;
    }
};