class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mpp;

        for(char ch:sentence){
            mpp[ch]++;
        }

        if(mpp.size()==26){
            return true;
        }

        return false;
    }
};