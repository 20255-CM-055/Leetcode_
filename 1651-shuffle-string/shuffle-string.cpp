class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        int m=indices.size();

        for(int i=0;i<m;i++)
        {
            ans[indices[i]]=s[i];
        }

        return ans;
    }
};