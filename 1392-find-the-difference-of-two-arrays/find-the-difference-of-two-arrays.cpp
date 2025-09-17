class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> temp1;
        vector<int> temp2;

        unordered_set<int> s1(nums1.begin(),nums1.end());
         unordered_set<int> s2(nums2.begin(),nums2.end());

        for(int x:s2)
        {
            if(s1.find(x)==s1.end())
            {
                temp1.push_back(x);
            }
        }

        for(int y:s1)
        {
            if(s2.find(y)==s2.end())
            {
                temp2.push_back(y);
            }
        }

        // ans.push_back(temp1);
        ans.push_back(temp2);
                ans.push_back(temp1);
        return ans;
    }
};