class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();

        int index=word.find(ch);
        string temp="";
        
        for(int i=0;i<=index;i++)
        {
            temp=temp+word[i];
        }

        reverse(temp.begin(),temp.end());

        for(int i=index+1;i<n;i++)
        {
            temp=temp+word[i];
        }

        return temp;
    }

};