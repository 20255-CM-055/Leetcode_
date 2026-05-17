class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int cnt=0;
        int maxi=0;

        for(int i=0;i<n;i++){
            string s=sentences[i];
            stringstream ss(s);
            string word;
            cnt=0;
            
            while(ss>>word){
                cnt++;
                maxi=max(cnt,maxi);
            }
        }

        return maxi;
    }
};