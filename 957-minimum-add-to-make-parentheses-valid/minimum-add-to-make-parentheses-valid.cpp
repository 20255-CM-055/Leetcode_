class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cnt=0;
        int i=0;

        for(char ch:s)
        {
            if(ch=='(')
            {
                cnt++;
            }
            else
            {
                if(cnt>0)
                {
                    cnt--;
                }
                else
                {
                    i++;
                }
            }
        }
         return cnt+i;
    }
};