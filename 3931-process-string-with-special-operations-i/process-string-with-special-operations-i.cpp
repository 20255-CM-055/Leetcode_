class Solution {
public:
    string processStr(string s) {
        int n=s.length();
        string ans="";

        for(char ch:s){
            if(ch>='a' && ch<='z'){
                ans=ans+ch;
            }
            else if(n>=1 && ch=='*'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
            else if(ch=='#'){
                ans+=ans;
            }
            else if(ch=='%'){
                reverse(ans.begin(),ans.end());
            }
        }

        return ans;
    }
};