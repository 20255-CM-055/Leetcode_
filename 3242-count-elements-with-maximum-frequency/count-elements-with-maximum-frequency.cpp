class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        int ans=0;

        for(int a:nums)
        {
            mpp[a]++;
        }

        int freq=0;

        for(auto it:mpp)
        {
            if(it.second>freq)
            {
                freq=it.second;
            }
        }

        for(auto it:mpp)
        {
            if(it.second==freq)
            {
                ans=ans+it.second;
            }
        }

        return ans;

    }
};