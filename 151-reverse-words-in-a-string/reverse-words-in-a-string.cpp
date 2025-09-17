class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       vector<string> arr;
        string word;

       while(ss>>word)
       {
         arr.push_back(word);
       }

       string temp;
       int n=arr.size();

       for(int i=n-1;i>=0;i--)
       {
         temp=temp+arr[i];
        //  temp=temp+" ";

        if(i!=0)
        {
            temp=temp+" ";
        }
       }

       return temp;
    }
};