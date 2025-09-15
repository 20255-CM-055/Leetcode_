class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=INT_MIN;

        int n=sentences.size();

        for(int i=0;i<n;i++)
        {
           int cnt=1;
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