class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n1=word1.size();
        int n2=word2.size();

        int len=max(n1,n2);

        for(int i=0;i<len;i++)
        {
            if(i<n1)
            {
                ans=ans+word1[i];
            }

            if(i<n2)
            {
                ans=ans+word2[i];
            }
        }

        return ans;
    }
};