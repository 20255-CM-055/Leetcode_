class Solution {
public:
    bool areOccurrencesEqual(string s) {
       unordered_map<char,int> mpp;

       for(char ch:s)
       {
        mpp[ch]++;
       }

       int freq=mpp.begin()->second;

       for(auto it:mpp)
       {
        if(it.second!=freq)
        {
            return false;
        }
       }

       return true;
    }
};