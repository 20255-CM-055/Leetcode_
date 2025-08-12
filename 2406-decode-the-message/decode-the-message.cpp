class Solution {
public:
    string decodeMessage(string key, string message) {
      
       unordered_map<char,char> mpp;
       unordered_set<char> st;
       string al="abcdefghijklmnopqrstuvwxyz";
        string ans="";
       int ind=0;

       for(char ch:key)
       {
            if(ch!=' ' && st.find(ch)==st.end())
            {
                st.insert(ch);
                mpp[ch]=al[ind++];
            }
       }

       for(char ch:message)
       {
            if(ch==' ')
            {
                ans=ans+" ";
            }
            else
            {
                ans=ans+mpp[ch];
            }
       }

       return ans;
    }
};