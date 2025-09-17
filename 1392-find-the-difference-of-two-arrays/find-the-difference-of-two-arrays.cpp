class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<vector<int>> ans;
       vector<int> t1,t2;

       unordered_set<int> s1(nums1.begin(),nums1.end());
       unordered_set<int> s2(nums2.begin(),nums2.end());

       for(int x:s1)
       {
          if(s2.find(x)==s2.end())
          {
                t1.push_back(x);
          }
       }

       for(int y:s2)
       {
        if(s1.find(y)==s1.end())
        {
            t2.push_back(y);
        }
       }

       ans.push_back(t1);
       ans.push_back(t2);

       return ans;
    }
};