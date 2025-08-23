class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans="";

        if(str1+str2!=str2+str1)
        {
            return "";
        }
        
        int n1=str1.size();
        int n2=str2.size();

        int len=gcd(n1,n2);

        ans=str1.substr(0,len);

        return ans;
    }
};