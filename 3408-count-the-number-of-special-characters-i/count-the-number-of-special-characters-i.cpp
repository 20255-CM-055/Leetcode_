class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> st(word.begin(),word.end());
        int cnt=0;

        for(char ch:st){
            if(st.count(tolower(ch)) && st.count(toupper(ch))){
                cnt++;
            }
        }

        return cnt/2;
    }
};