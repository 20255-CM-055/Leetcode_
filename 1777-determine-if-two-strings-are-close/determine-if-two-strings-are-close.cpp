class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();

        if(n1!=n2)
        {
            return false;
        }

        set<char> s1(word1.begin(),word1.end());
        set<char> s2(word2.begin(),word2.end());

        if(s1!=s2)
        {
            return false;
        }
       
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;

        for(char ch:word1)
        {
            mpp1[ch]++;
        }

        for(char ch:word2)
        {
            mpp2[ch]++;
        }

        vector<int> a1,a2;

        for(auto it:mpp1)
        {
            a1.push_back(it.second);
        }

        for(auto it:mpp2)
        {
            a2.push_back(it.second);
        }

        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());

        if(a1!=a2)
        {
            return false;
        }

        return true;
    }
};