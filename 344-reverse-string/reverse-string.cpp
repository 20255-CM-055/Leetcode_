class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans;
        int l=0;
        int r=s.size()-1;

        for(int i=r;i>=0;i--){
            ans.push_back(s[i]);
        }

        s=ans;
    }
};