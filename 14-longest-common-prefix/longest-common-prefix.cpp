class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string f=strs[0];
        string l=strs[n-1];

        string ans;

        for(int i=0;i<min(f.size(),l.size());i++)
        {
            if(f[i]!=l[i])
            {
                return ans;
            }
            ans=ans+f[i];
        }

        return ans;

    }
};