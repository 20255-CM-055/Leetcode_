class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.size();

        while(!num.empty() && num.back()=='0')
        {
            num.pop_back();
        }

        return num;
    }
};