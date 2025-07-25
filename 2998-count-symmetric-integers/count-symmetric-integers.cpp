class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;

        for(int i=low;i<=high;i++)
        {
            string s=to_string(i);
            int len=s.length();

            if(len%2!=0)
            {
                continue;
            }

            int half=len/2;
            int ls=0;
            int rs=0;
            for(int j=0;j<half;j++)
            {
                ls=ls+s[j]-'0';
                rs=rs+s[j+half]-'0';
            }

            if(ls==rs)
            {
                cnt++;
            }
        }

        return cnt;
    }
};