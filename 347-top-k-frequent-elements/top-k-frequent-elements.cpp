class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n=nums.size();

        for(int a:nums)
        {
            mpp[a]++;
        }
        
        vector<pair<int,int>> freq;

        for(auto it:mpp)
        {
            freq.push_back({it.first,it.second});
        }

        sort(freq.begin(),freq.end(),[](pair<int,int> a,pair<int,int> b)
        {
            if(a.second==b.second)
            {
                return a.first>b.first;
            }

            return a.second>b.second;
        });

        vector<int> ans;

        for(int i=0;i<k && i<freq.size();i++)
        {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};