class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());

        int dif=INT_MAX;    

        for(int i=0;i<n-1;i++)
        {
            dif=min(dif,(arr[i+1]-arr[i]));
        }

        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i] == dif)
            {
                ans.push_back({arr[i],arr[i+1]});
            }
        }

        return ans;
    }
};