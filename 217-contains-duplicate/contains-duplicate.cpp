class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();

        map<int,int> mpp;

        for(int a:nums){
            mpp[a]++;
        }

        for(auto it:mpp){
            if(it.second>=2){
                return true;
            }
        }

        return false;
    }
};