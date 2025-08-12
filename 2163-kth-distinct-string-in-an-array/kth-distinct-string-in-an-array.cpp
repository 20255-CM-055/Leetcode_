class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        string ans="";
        unordered_map<string,int> mpp;

        for(string word:arr)
        {
            mpp[word]++;
        }

        for(string str:arr)
        {
            if(mpp[str]==1)
            {
                k--;
            }

            if(k==0)
            {
                return str;
            }
        }

        return ans;
    }
};