class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       vector<string> temp;
        string word;
        
       while(ss>>word){
        temp.push_back(word);
       }

       int n=temp.size();
       string ans;

       for(int i=n-1;i>=0;i--){
        ans=ans+temp[i];
        if(i!=0){
            ans=ans+" ";
        }
       }

       return ans;
    }
};