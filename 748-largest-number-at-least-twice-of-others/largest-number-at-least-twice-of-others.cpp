class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        int first=-1;
        int second=-1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>first)
            {
                second=first;
                first=nums[i];
                index=i;
            }
            else if(nums[i]>second)
            {
                second=nums[i];
            }
        }

        if(first>=second*2)
        {
            return index;
        }
        
        return -1;
    }
};