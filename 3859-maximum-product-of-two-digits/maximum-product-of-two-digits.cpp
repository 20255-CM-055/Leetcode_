class Solution {
public:
    int maxProduct(int num) {
    
       string s=to_string(num);

       sort(s.begin(),s.end());
        int n=s.size();

       int one=(s[n-1])-'0';
       int two=(s[n-2])-'0';

       return one*two;
    }
};