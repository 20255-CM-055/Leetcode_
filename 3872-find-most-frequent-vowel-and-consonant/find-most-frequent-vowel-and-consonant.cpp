class Solution {
public:
    int maxFreqSum(string s) {
       
      map<char,int> mpp;

        for(char ch:s)
        {
            mpp[ch]++;
        }

        int vow=0;
        int con=0;

        for(auto it:mpp)
        {
            if(it.first=='a' || it.first=='e' || it.first=='i' || it.first=='o'|| it.first=='u')
            {
                vow=max(vow,it.second);
            }
            else
            {
                con=max(con,it.second);
            }
        }

        return vow+con;
     

        
    }
};