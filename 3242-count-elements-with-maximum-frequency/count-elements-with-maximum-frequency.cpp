class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        int freq=0;
        int ans=0;

        for(int a:nums)
        {
            mpp[a]++;
        }

        for(auto it:mpp)
        {
            freq=max(freq,it.second);
        }

        for(auto it:mpp)
        {
            if(freq==it.second)
            {
                ans=ans+it.second;
            }
        }

        return ans;

    }
};