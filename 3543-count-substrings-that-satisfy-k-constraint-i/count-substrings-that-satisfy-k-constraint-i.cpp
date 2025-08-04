class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int one=0;
        int zero=0;
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            one=0;
            zero=0;
            for(int j=i;j<n;j++)
            {
                if(s[j]=='0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }

                if(zero<=k || one<=k)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }

        return cnt;
    }
};