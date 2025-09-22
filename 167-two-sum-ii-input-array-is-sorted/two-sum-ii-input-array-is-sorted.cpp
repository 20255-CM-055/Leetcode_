class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans;
        int n=arr.size();
        int r=0;
        int l=n-1;

        while(r<l)
        {
            int sum=arr[r]+arr[l];
            if(sum==target)
            {
                ans.push_back(r+1);
                ans.push_back(l+1);
                r++;
                l--;
            }
            else if(sum<target)
            {
                r++;
            }
            else
            {
                l--;
            }
        }

        return ans;
    }
};