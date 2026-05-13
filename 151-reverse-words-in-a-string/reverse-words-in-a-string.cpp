class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       string ans;
       vector<string> temp;
       string word;

       while(ss>>word){
            temp.push_back(word);
       }

       int n=temp.size();
       for(int i=n-1;i>=0;i--){
        ans=ans+temp[i];

        if(i!=0){
            ans=ans+" ";
        }
       }

       return ans;
    }
};