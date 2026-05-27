class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lo(26,-1);
        vector<int> up(26,-1);
        int n=word.size();

       for(int i=0;i<n;i++){
        char ch=word[i];

        if(ch>='a' && ch<='z'){
            lo[ch-'a']=i;
        }
        else {
           if(up[ch-'A']==-1){
             up[ch-'A']=i;
           }
        }
       }

       int cnt=0;

       for(int i=0;i<26;i++){
        if(lo[i]!=-1 && up[i]!=-1 && lo[i]<up[i]){
            cnt++;
        }
       }

       return cnt;
    }
};