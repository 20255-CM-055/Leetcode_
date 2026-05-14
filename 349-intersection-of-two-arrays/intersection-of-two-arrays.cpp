class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> temp;
       unordered_set<int> st(nums1.begin(),nums1.end());

       for(int n:nums2){
        if(st.count(n)){
            temp.insert(n);
        }
       }

       vector<int> ans(temp.begin(),temp.end());

       return ans;
    }
};