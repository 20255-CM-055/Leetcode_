class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        int cnt=0;
        string word;

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