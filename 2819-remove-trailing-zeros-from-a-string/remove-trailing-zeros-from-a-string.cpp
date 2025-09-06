class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.size();

        num.erase(num.find_last_not_of('0')+1);

        return num;
    }
};