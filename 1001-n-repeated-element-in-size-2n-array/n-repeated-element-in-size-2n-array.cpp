class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int val=n/2;
        int ans=0;

        set<int> st;

        for(int a:nums)
        {
            if(st.count(a))
            {
                ans=a;;
            }
            st.insert(a);
        }

        return ans;
    }
};