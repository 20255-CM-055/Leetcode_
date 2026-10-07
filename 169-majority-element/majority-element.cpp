class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int temp=INT_MIN;
        int ans=0;

        map<int,int> mpp;

        for(int a:nums){
            mpp[a]++;
        }

        for(auto it:mpp){
            if(it.second>temp){
                temp=it.second;
                ans=it.first;
            }
        }

        return ans;
    }
};