class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int x=n/2;

        map<int,int> mpp;

        for(int a:nums){
            mpp[a]++;
        }

        int ans=-1;
        for(auto it:mpp){
            if(it.second==x){
                ans=it.first;
            }
        }

        return ans;
    }
};