class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int t=text.size();
        int b=brokenLetters.size();
        string word;
        stringstream ss(text);
        int cnt=0;

        while(ss>>word)
        {
            bool type=true;
            for(char ch:word)
            {
                if(brokenLetters.find(ch)!=string::npos)
                {
                    type=false;
                    break;
                }
            }

            if(type==true)
            {
                cnt++;
            }
        }

        return cnt;
    }
};