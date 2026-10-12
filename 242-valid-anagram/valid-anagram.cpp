class Solution {
public:
    bool isAnagram(string s, string t) {
        // map<char,int> mpp;

        // for(char ch:s){
        //     mpp[ch]++;
        // }

        // for(char chs:t){
        //     mpp[chs]--;
        // }

        // for(auto it:mpp){
        //     if(it.second!=0){
        //         return false;
        //     }
        // }

        // return true;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
    }
};