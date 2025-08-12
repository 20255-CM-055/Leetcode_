class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;

        for(int a:nums)
        {
            string str=to_string(a);

            for(char ch:str)
            {
                ans.push_back(ch-'0');
            }
        }

        return ans;
    }
};