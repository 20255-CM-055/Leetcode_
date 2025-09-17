class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        map<int,int> mpp;

        for(int a:nums)
        {
            mpp[a]++;
        }

        for(auto it:mpp)
        {
            if(it.second==1)
            {
                ans=it.first;
                break;
            }
        }

        return ans;
    }
};