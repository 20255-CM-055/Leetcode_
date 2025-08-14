class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        int i=0;
        int j=n-1;
        string ans="";
        
        for(int i=0;i+2<n;i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                string cur=num.substr(i,3);
                ans=max(ans,cur);
            }
        }

        return ans;
    }
};