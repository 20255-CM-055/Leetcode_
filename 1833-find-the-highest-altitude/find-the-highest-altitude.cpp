class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> ans;
        int sum=0;

        ans.push_back(0);
        for(int i=0;i<n;i++)
        {
            sum=sum+gain[i];
            ans.push_back(sum);
        }

        int maxi=-1;

        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>maxi)
            {
                maxi=ans[i];
            }
        }

        return maxi;
    }
};