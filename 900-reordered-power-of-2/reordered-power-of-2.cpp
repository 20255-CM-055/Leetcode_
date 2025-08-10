class Solution {
public:
    bool reorderedPowerOf2(int n) {
       string s=to_string(n);

       sort(s.begin(),s.end());

       do
       {
          if(s[0]=='0')
          {
            continue;
          }

          int num=stoi(s);
          for(int i=0;i<31;i++)
          {
            if((1<<i)==num)
            {
                return true;
            }
          }
       }while(next_permutation(s.begin(),s.end()));

       return false;
    }
};