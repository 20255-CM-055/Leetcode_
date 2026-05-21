class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();

        if(n1!=n2)
        {
            return false;
        }

       map<char,int> mpp;

       for(char ch:s){
        mpp[ch]++;
       }

       for(char ch:t){
        mpp[ch]--;
       }

       for(auto it:mpp){
        if(it.second!=0){
            return false;
        }
       }

       return true;
    }
};