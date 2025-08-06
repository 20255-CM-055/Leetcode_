class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int,int> mpp;

        for(int a:arr1)
        {
            mpp[a]++;
        }

        for(int num:arr2)
        {
            while(mpp[num]>0)
            {
                ans.push_back(num);
                mpp[num]--;
            }
            mpp.erase(num);
        }

        for(auto it:mpp)
        {
            while(it.second--)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};