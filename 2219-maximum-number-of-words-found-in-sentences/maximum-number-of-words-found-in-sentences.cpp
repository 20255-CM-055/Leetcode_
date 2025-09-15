class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int ans=INT_MIN;
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            cnt=1;
            for(char ch:sentences[i])
            {
                if(ch==' ')
                {
                    cnt++;
                }
            }

            ans=max(ans,cnt);
        }

        return ans;
    }
};