class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> arr;
        int n=nums.size();

        for(int a:nums){
            string s=to_string(a);

            for(char ch:s){
                arr.push_back(ch-'0');
            }
        }

        return arr;
    }
};