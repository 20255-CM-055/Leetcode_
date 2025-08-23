class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int val=n/2;
        int ans=0;

        map<int,int> mpp;

        for(int a:nums)
        {
            mpp[a]++;
        }

        for(auto it:mpp)
        {
            if(it.second==val)
            {
                ans=it.first;
                break;
            }
        }

        return ans;
    }
};