class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> st(nums1.begin(),nums1.end());

        for(int a:nums2){
            if(st.count(a))
            {
                return a;
            }
        }

        return -1;
    }
};