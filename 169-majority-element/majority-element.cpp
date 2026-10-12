class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int t=INT_MIN;
        map<int,int> mpp;

        for(int a:nums){
            mpp[a]++;
        }

        for(auto it:mpp){
            if(it.second>t){
                t=it.second;
                ans=it.first;
            }
        }

        return ans;
    }
};