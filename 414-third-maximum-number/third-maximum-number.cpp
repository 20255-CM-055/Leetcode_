class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        int n=nums.size();

        for(int a:nums)
        {
            st.insert(a);
        }

        vector<int> arr(st.begin(),st.end());
       int len=arr.size();
       if(len<3)
       {
          return arr[len-1];
       }
       return arr[len-3];
    }
};