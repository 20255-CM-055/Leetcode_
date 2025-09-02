class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        map<int,int> mpp;

        for(int a:nums)
        {
            mpp[a]++;
        }

        for(auto it:mpp)
        {
            if(it.second==1)
            {
                sum=sum+it.first;
            }
        }

        return sum;
    }
};